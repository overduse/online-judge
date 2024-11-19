#include<iostream>

using namespace std;
int main(){

    int balance=0, deposit=0;
    int a[12], flag=0;
    for(int i=0; i<12; i++) cin >> a[i];
    for(int i=0; i<12; i++){
        balance += 300;
        balance -= a[i];
        if(balance < 0){
            flag = i+1;
            break;
        }
        if(balance/100>0){
            deposit += (balance/100)*100;
            balance %= 100;
        }
    }
    if(flag) cout << -flag << endl;
    else{
        balance += deposit * 1.2;
        cout << balance << endl;
    }
    return 0;
}
