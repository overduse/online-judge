#include <iostream>

#define MAXN 110
using namespace std;

char a[MAXN][MAXN];
int b[MAXN][MAXN];

int main(){
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]=='?'){
                int cnt=0;
                if(i-1>=0 && j-1>=0 && a[i-1][j-1]=='*') cnt++;
                if(j-1>=0 && a[i][j-1]=='*') cnt++;
                if(i+1<n && j-1>=0 && a[i+1][j-1]=='*') cnt++;
                if(i-1>=0 && a[i-1][j]=='*') cnt++;
                if(i+1<n && a[i+1][j]=='*') cnt++;
                if(i-1>=0 && j+1<m && a[i-1][j+1]=='*') cnt++;
                if(j+1<m && a[i][j+1]=='*') cnt++;
                if(i+1<n && j+1<m && a[i+1][j+1]=='*') cnt++;
                // b[i][j]=cnt;
                cout << cnt;
            }else{
                cout <<'*';
            }
        }
        cout << endl;
    }
    return 0;
}
