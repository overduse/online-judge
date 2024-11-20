#include <iostream>
#define MAXN 21

using namespace std;
int a[MAXN][MAXN][MAXN];
int main(){

    int w, x, h;
    cin >> w >> x >> h;
    int q;
    cin >> q;
    for(int i=0; i<q; i++){
        int a1, a2, b1, b2, c1, c2;
        cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

        for(int k=a1; k<=a2; k++)
            for(int j=b1; j<=b2; j++)
                for(int l=c1; l<=c2; l++)
                    a[k][j][l]=1;
    }
    int cnt=0;
    for(int i=1; i<=w; i++)
        for(int j=1; j<=x; j++)
            for(int k=1; k<=h; k++)
                if(a[i][j][k]==0) cnt++;

    cout << cnt << endl;

    return 0;
}
