#include <iostream>

using namespace std;
int a[10];
void countn(int x);

int main(){
    int m, n; cin >> m >> n;

    for(int i=m; i<=n; i++){
        countn(i);
    }
    for(int i=0; i<10; i++)
        cout << a[i] << " ";

    return 0;
}
void countn(int x){
    int temp;
    while(x){
        temp=x%10;
        a[temp]++;
        x/=10;
    }

}
