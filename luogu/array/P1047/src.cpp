#include <iostream>
#define MAXN 10010
using namespace std;

int atree[MAXN];
int main(){

    int l, m;
    cin >> l >> m;
    for(int i=0; i<m; i++){
        int a, b; cin >> a >> b;
        for(int j=a; j<=b; j++){
            atree[j]=1;
        }
    }
    int cnt=0;
    for(int i=0; i<=l; i++){
        if(!atree[i]) cnt++;
    }
    cout << cnt << endl;

    return 0;
}
