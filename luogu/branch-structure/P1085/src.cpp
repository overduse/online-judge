#include <iostream>

using namespace std;

int main(){

    int d, maxn;
    maxn=0, d=-1;
    int t[7] = {0};

    for(int i=0; i<7; i++){
        int a, b;
        cin >> a >> b;
        t[i]= a+b;
    }

    for(int i=0; i<7; i++){
        if(maxn < t[i]){
            maxn = t[i];
            d = i+1;
        }
    }
    if(maxn<=8) cout << 0;
    else cout << d;

    return 0;
}
