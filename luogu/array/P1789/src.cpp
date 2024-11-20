#include <iostream>
#define MAXN 110

using namespace std;
int a[MAXN][MAXN];

int main(){

    int n, m, k;
    cin >> n >> m >> k;
    int x, y;
    for(int i=0; i<m; i++){
        cin >> x >> y;

        if(y-2>0){
            a[x][y-2]=1;
        }
        if(y-1>0){
            a[x-1][y-1]=1;
            a[x+1][y-1]=1;
        }
        if(x-2>0){
            a[x-2][y]=1;
        }
        if(x-1>0){
            a[x-1][y]=1; a[x-1][y+1]=1;
        }
        a[x][y-1]=1; a[x][y]=1;
        a[x][y+2]=1; a[x][y+1]=1;
        a[x+1][y]=1; a[x+1][y+1]=1;
        a[x+2][y]=1;
    }
    for(int i=0; i<k; i++){
        cin >> x >> y;
        for(int j=-2; j<=2; j++){
            for(int l=-2; l<=2; l++){
                a[x+j][y+l]=1;
            }
        }
    }
    int cnt=0;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(a[i][j]==0) cnt++;

    cout << cnt << endl;

    return 0;
}
