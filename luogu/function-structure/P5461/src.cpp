#include <iostream>
#include <cmath>
#define MAXN 1100

using namespace std;
int mat[MAXN][MAXN];
void amnesty(int x, int y, int len);
int main(){
    int n; cin >> n;
    int num=pow(2, n);
    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            mat[i][j]=1;
        }
    }
    amnesty(0, 0, num);

    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            if(j) cout << " ";
            cout << mat[i][j];
        }
        cout << endl;
    }


    return 0;
}

void amnesty(int x, int y, int len){
    if(len<2) return;
    for(int i=0; i<len/2; i++){
        for(int j=0; j<len/2; j++){
            mat[x+i][y+j]=0;
        }
    }
    amnesty(x+len/2, y+len/2, len/2);
    amnesty(x, y+len/2, len/2);
    amnesty(x+len/2, y, len/2);
}
