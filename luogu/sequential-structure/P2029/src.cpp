#include <iostream>
#include <cmath>
#define pi 3.14

using namespace std;

int main(){

    int h, r;
    cin >> h >> r;
    double S = h * pi * r * r;

    int n = ceil(20*1000.0/S);
    cout << n << endl;

    return 0;
}
