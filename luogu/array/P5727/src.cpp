#include <iostream>
#define MAXN 110
using namespace std;
int a[MAXN];
int main(){
    int index=0;
    int n; cin >> n;
    a[0]=n; index++;
    while(n!=1){
        if(n%2)
            n = 3*n+1;
        else
            n /= 2;

        a[index] = n;
        index++;

    }
    for(int i=index-1; i>=0; i--){
        cout << a[i] << " ";
    }

    return 0;
}
