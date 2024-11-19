#include <iostream>

using namespace std;

int main(){

    double S=0;
    int i=0, k; cin >> k;
    while(S<=k){
        i++;
        S += 1.0/i;
    }
    cout << i << endl;

    return 0;
}
