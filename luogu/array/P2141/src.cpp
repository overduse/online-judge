#include <iostream>

using namespace std;
int t[20010];

int main(){
    int n; cin >> n;
    int a[110]={0}, temp;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    for(int i=n; i>1; i--){
        for(int j=1; j<i; j++){
            temp = a[i]+a[j];
            t[temp]=1;
        }
    }
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(t[a[i]]) cnt++;
    }
    cout << cnt;

    return 0;
}
