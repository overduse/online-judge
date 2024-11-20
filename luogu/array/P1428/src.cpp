#include <iostream>
#define MAXN 120

using namespace std;
int a[MAXN];
int b[MAXN];

int main(){
    int n; cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){

        for(int j=0; j<i; j++){
            if(a[j]<a[i]) b[i]++;
        }
    }
    for(int i=0; i<n; i++){
        cout << b[i] << " ";
    }

    return 0;
}
