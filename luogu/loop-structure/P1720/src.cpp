#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int n; cin >> n;
    double res;
    long long a=1, b=1, c;

    if( n==0 ) res = 0;
    else if(n<3) res=1;
    else{
        for(int i=3; i<=n; i++){
            c = a+b;
            a = b;
            b = c;
        }
        res = c;
    }
    cout << fixed << setprecision(2) << res << endl;

    return 0;
}
