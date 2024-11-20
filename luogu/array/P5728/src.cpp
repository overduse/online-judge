#include <iostream>
#include <cmath>
#define MAXN 1010
using namespace std;

int a[MAXN][3];

int main(){
    int n, cnt=0;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<i; j++){
            bool flag=true;
            if(abs(a[i][0]-a[j][0])>5) flag=false;
            if(abs(a[i][1]-a[j][1])>5) flag=false;
            if(abs(a[i][2]-a[j][2])>5) flag=false;
            if(abs((a[i][0]+a[i][1]+a[i][2])-(a[j][0]+a[j][1]+a[j][2]))>10) flag=false;
            if(flag){cnt++;}
        }

    }
    cout << cnt << endl;
    return 0;
}
