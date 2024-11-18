#include <iostream>

using namespace std;

int main(){

    int x, n; cin >> x >> n;
    int d = 0;
    for(int i=0; i<n; i++){
        if(x<6) d += 250;
        x = x%7+1;
    }
    cout << d << endl;

    return 0;
}
