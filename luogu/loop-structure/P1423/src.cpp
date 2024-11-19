#include <iostream>

using namespace std;

int main(){

    double sum=0;
    double s, step=2; cin >> s;

    int cnt=0;

    while(sum<s){
        cnt++;
        sum += step;
        step *= 0.98;
    }
    cout << cnt << endl;
    return 0;
}
