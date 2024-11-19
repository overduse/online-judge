#include <iostream>
using namespace std;
int a[20];
int main(){
    int n; cin >> n;
    int len=0;
    bool sign=false;
    if(n<0){
        sign=true;
        n *= -1;
    }
    while(n){
        a[len]=n%10;
        len++;
        n/=10;
    }
    int rev = 0;
    for(int i=0; i<len; i++){
        rev = rev*10+a[i];
    }
    if(sign) cout << "-";
    cout << rev << endl;

    return 0;
}
