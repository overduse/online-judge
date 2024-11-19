#include <iostream>
#include <cmath>

#define MAXN 200

using namespace std;
int load_num(int n);
bool isPalindromes(int n);
bool isPrime(int n);

int a[200];

int main(){

    // cout << isPalindromes(121) << endl;
    int a, b; cin >> a >> b;
    if(a%2==0) a++;
    for(int i=a; i<=b; i+=2){
        if(isPalindromes(i) && isPrime(i)){
            cout << i << endl;
        }
    }

    return 0;
}
int load_num(int n){
    int len=0;
    while(n){
        len++;
        a[len]=n%10;
        n/=10;
    }
    return len;
}
bool isPalindromes(int n){
    int len=load_num(n);
    // cout << "len:" << len << endl;
    bool ret=true;
    for(int i=1; i<=len/2; i++){
        if(a[i]!=a[len+1-i]){
            ret=false;
            break;
        }
    }
    return ret;
}
bool isPrime(int n){
    bool ret=true;
    if(n==1) ret=false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            ret=false;
            break;
        }
    }
    return ret;
}
