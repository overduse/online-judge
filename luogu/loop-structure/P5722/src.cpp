#include <iostream>

using namespace std;

int main(){

    int sum=0;
    int x; cin >> x;
    for(int i=1; i<=x; i++){
        sum += i;
    }
    cout << sum << endl;

    return 0;
}
