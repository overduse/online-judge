#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int a;
    int maxn=0, minn=100;

    for(int i=0; i<n; i++){
        cin >> a;
        if(a<minn) minn=a;
        if(a>maxn) maxn=a;
    }
    cout << maxn - minn << endl;

    return 0;
}
