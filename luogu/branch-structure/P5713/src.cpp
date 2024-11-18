#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int local = 5*n;
    int online = 11+3*n;

    if(local<online) cout << "Local";
    else cout << "Luogu";

    return 0;
}
