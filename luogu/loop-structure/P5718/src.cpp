#include <iostream>
// sort API head file
// #include <algorithm>

#define MAXN 200
#define INF 1024*1024

using namespace std;

int main(){

    int a[MAXN]={0}, minn=INF;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]<minn) minn=a[i];
    }
    // sort(a, a+n-1);
    cout << minn << endl;

    return 0;
}
