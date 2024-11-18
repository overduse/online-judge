#include <iostream>

using namespace std;

bool isLeapYear(int y);

int main(){

    int days[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y, m; cin >> y >> m;

    if(isLeapYear(y) && m==2) cout << 29;
    else cout << days[m-1];

    return 0;
}

bool isLeapYear(int y){
    bool ret;
    if(y % 100 == 0){
        if(y % 400 == 0){
            ret = true;
        }else ret =false;
    }else if(y % 4 ==0){
        ret = true;
    }

    return ret;
}
