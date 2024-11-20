#include <iostream>
#include <cmath>
using namespace std;

bool list[2000010];
int main(){
    int n; cin >> n;
    double a; int t; int idx;
    for(int i=0; i<n; i++){
        cin >> a >> t;
        for(int j=1; j<=t; j++){
            idx = floor(a*j);
            list[idx]= !list[idx];
        }
    }
    for(idx=1; list[idx]!=true; idx++);
    cout << idx << endl;

    return 0;
}
