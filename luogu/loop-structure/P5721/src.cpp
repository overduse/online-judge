#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n; cin >> n;
    int cnt=1;

    for(int i=n; i>0; i--){

        for(int j=0; j<i; j++){
            cout << setfill('0') << setw(2)
                 << cnt;
            cnt++;
        }
        cout << endl;
    }
    return 0;
}
