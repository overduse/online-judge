#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int T;
    cin >> T;
    if (T == 1) {
        cout << "I love Luogu!";

    } else if (T == 2) {
        cout << 2 + 4 << " " << 10 - 2 - 4;

    } else if (T == 3) {
        int apples = 14;
        int students = 4;
        cout << apples/students << endl << apples/students * students
             << endl << apples%students;

    } else if (T == 4) {
        double cola = 500;
        int students = 3;
        cout << setprecision(6) << cola/students;

    } else if (T == 5) {
        int l1 = 260, l2 = 220;
        int v1 = 12, v2 = 20;
        cout << (l1+l2)/(v1+v2);

    } else if (T == 6) {
        int l = 6, w =9;
        cout << sqrt(l*l+w*w);

    } else if (T == 7) {
        int balance = 100;
        balance += 10;
        cout << balance << endl;
        balance -= 20;
        cout << balance << endl;
        balance -= balance;
        cout << balance << endl;

    } else if (T == 8) {
        int r = 5;
        const double pi = 3.141593;
        double C = 2*pi*r;
        double S = pi*r*r;
        double V = pi*r*r*r*4/3.0;
        cout << C << endl;
        cout << S << endl;
        cout << V << endl;

    } else if (T == 9) {
        int apples = 1;
        for(int day=4; day>1; day--){
            apples = (apples+1)*2;
        }
        cout << apples;

    } else if (T == 10) {
        // total = a*t+b
        double a = (8*30-10*6)*1.0/(30-6);
        double b = ((10*6)-6*a);
        int n = (10*a+b)/10;
        cout << n << endl;

    } else if (T == 11) {
        int va = 5, vb = 8;
        double d = 100;
        double t = d/(vb-va);
        cout << t << endl;

    } else if (T == 12) {
        int ans1 = 'M'-'A'+1;
        char ans2 = 'A'+18-1;
        cout << ans1 << endl << ans2;

    } else if (T == 13) {
        int r1 = 4, r2 = 10;
        const double pi = 3.141593;
        double v1 = pi*r1*r1*r1*4/3.0;
        double v2 = pi*r2*r2*r2*4/3.0;
        int l = cbrt(v1+v2);
        cout << l << endl;

    } else if (T == 14) {
        cout << 50 << endl;

    }
    return 0;
}
