#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int apple=1; int day=n;

    while(day>1){
        apple = (apple+1)*2;
        day--;
    }
    cout << apple << endl;

    return 0;
}
