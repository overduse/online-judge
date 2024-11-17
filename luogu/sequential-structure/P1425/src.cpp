#include<iostream>

using namespace std;

int main(){

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int tstart = a*60+b;
    int tend = c*60+d;
    int t = tend - tstart;
    int h = t / 60;
    int m = t % 60;

    cout << h << " " << m << endl;

    return 0;
}
