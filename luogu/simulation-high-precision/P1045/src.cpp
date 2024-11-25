#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

#define LEN 1010

using namespace std;
int a[LEN], b[LEN], t[LEN];

void mult(int x[], int y[]){
    memset(t, 0, sizeof(t));
    for(int i=1; i<=x[0]; i++){
        for(int j=1; j<=y[0]; j++){
            if(i+j-1>500) continue;
            t[i+j-1] += x[i]*y[j];
            t[i+j] += t[i+j-1]/10;
            t[i+j-1] %= 10;
            t[0] = i + j;
        }
    }
    memcpy(b, t, sizeof(b));
}
void bin_exp(int p){
    if(p==1){
        memcpy(b, a, sizeof(b));
        return;
    }
    bin_exp(p/2);
    mult(b, b);
    if(p%2==1) mult(b, a);
}

int main(){
    int p; cin >> p;
    cout << ceil(p*log10(2)) << endl;

    a[0]=1; a[1]=2;
    b[0]=1; b[1]=1;

    bin_exp(p);
    for(int i=500; i>=1; i--){
        if(i!=500 && i%50==0) cout << endl;
        if(i!=1) cout<<b[i];
        else cout<<b[i]-1;
    }
    return 0;
}
