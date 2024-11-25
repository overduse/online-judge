#include <iostream>
#define MAXN 550

using namespace std;
int mat[MAXN][MAXN];

void trans(int x, int y, int r, int direc);

int main(){
    int n, m;
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            mat[i][j] = (i-1)*n+j;
        }
    }
    int x, y, r, direc;
    for(int i=0; i<m; i++){
        cin >> x >> y >> r >> direc;
        trans(x, y, r, direc);
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j>1) cout << " ";
            cout << mat[i][j];
        }
        cout << endl;
    }

    return 0;
}
void trans(int x, int y, int r, int direc){
    if(r==0) return;

    int temp[MAXN][MAXN];

    for(int i=0; i<=2*r; i++){
        for(int j=0; j<=2*r; j++){
            if(direc) temp[x-r+i][y-r+j] = mat[x-r+j][y+r-i];
            else temp[x-r+i][y-r+j]= mat[x+r-j][y-r+i];
        }
    }
    for(int i=0; i<=2*r; i++){
        for(int j=0; j<=2*r; j++){
            mat[x-r+i][y-r+j] = temp[x-r+i][y-r+j];
        }
    }

}
