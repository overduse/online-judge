#include <iostream>
#include <cmath>

using namespace std;
bool isPrime(int n);

int main(){
    int L; cin >> L;
    int sum=0, cnt=0;
    int num=2;

    while(true){
        if(isPrime(num)){
            if(sum+num>L) break;
            else{
                sum+=num;
                cnt++;
                cout << num << endl;
            }
        }
        num++;
    }
    cout << cnt << endl;

    return 0;
}
bool isPrime(int n){
    bool ret=true;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            ret=false;
            break;
        }
    }
    return ret;
}
