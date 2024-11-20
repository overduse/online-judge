#include <iostream>
#include <iomanip>
using namespace std;
int a[100][100];
int main(){
    int n; cin >> n;
    int x=1, y=1;
    a[1][1]=1;
    int cnt=1;

    while(cnt<n*n){
        while(a[x][y+1]==0 && y+1<=n){
            x=x; y=y+1;
            cnt++;
            a[x][y]=cnt;
        }
        while(a[x+1][y]==0 && x+1<=n){
            x=x+1; y=y;
            cnt++;
            a[x][y]=cnt;
        }
        while(a[x][y-1]==0 && y-1>0){
            x=x; y=y-1;
            cnt++;
            a[x][y]=cnt;
        }
        while(a[x-1][y]==0 && x-1>0){
            x=x-1; y=y;
            cnt++;
            a[x][y]=cnt;
        }

    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << setw(3) << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
