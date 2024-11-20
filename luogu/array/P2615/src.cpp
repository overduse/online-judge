#include <iostream>
#define MAXN 40

using namespace std;
int a[MAXN][MAXN];

int main(){
    int n; cin >> n;
    int x=1, y=(n+1)/2;
    a[x][y] = 1;

    for(int i=2; i<=n*n; i++){
        if(x==1 && y!=n){
            x=n;
            y=y+1;
            a[x][y]=i;
        }else if(y==n && x!=1){
            y=1;
            x=x-1;
            a[x][y]=i;
        }else if(x==1 && y==n){
            x=x+1;
            y=y;
            a[x][y]=i;
        }else if(x!=1 && y!=n){
            if(a[x-1][y+1]==0){
                x=x-1;
                y=y+1;
                a[x][y]=i;
            }else{
                x=x+1;
                a[x][y]=i;
            }
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << a[i][j];
            if(j!=n) cout << " ";
        }
        cout << endl;
    }


    return 0;
}

