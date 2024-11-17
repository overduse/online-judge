#include <iomanip>
#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int n;
    double t;

    // Cpp stream method
    cin >> t >> n;
    cout << setprecision(3) << fixed << t/n << endl << 2*n <<endl;

    // scanf("%lf %d", &t, &n);
    // printf("%.3lf\n%d", t/n, 2*n);

    return 0;
}
