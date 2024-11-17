#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    int s, v;
    cin >> s >> v;
    int hours = 8;
    int mins = 0;

    mins -= 10;
    mins -= s/v;

    if(s%v) mins--;

    hours += mins/60;
    mins = mins%60;

    if(mins<0){
        hours--;
        mins+=60;
    }
    while(hours < 0){ hours += 24;}

    cout << setw(2) << setfill('0') << hours << ':' << setw(2) << setfill('0') << mins <<endl;

    return 0;
}
