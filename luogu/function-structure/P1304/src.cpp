#include <iostream>
#include <cmath>

using namespace std;
bool is_prime(int n);

int main(){

    int n; cin >> n;
    int m = (n-2)/2;
    for(int i=1; i<=m; i++){
        int num = 2*i+2;
        for(int i=2; i<=num; i++){
            if(is_prime(i) && is_prime(num-i)){
                int num1=i, num2= num-i;
                cout << num << "=" << num1 << "+" << num2 << endl;
                break;
            }

        }

    }

    return 0;
}
bool is_prime(int n){
    bool ret=true;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            ret=false;
            break;
        }
    }
    return ret;
}
