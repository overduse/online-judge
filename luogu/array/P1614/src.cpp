#include <iostream>
#define MAXN 3010
using namespace std;

int a[MAXN];

int main(){

    int n, m; cin >> n >> m;
    int minn=100000000; //inf
    for(int i=1; i<=n; i++)
        cin >> a[i];
    for(int i=1; i<=n-m+1; i++){
        int sum=0;
        for(int j=i; j<i+m; j++){
            sum += a[j];
        }
        if(sum<minn) minn=sum;
    }
    cout << minn << endl;

    return 0;
}
