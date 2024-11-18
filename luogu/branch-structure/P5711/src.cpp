#include <iostream>

using namespace std;
bool isLeapYear(int n);

int main(){

    int n; cin >> n;
    cout << isLeapYear(n);
    return 0;
}

bool isLeapYear(int n){

    bool ret;
    if(n%100 == 0){
        ret = !(n%400)?true:false;
    }else{
        ret = !(n%4);
    }
    return ret;
}
