#include <iostream>

using namespace std;

int main(){
    int n;
    int x=0, k=0;
    cin >> n;
    n/=52*7;

    if(n<=103){
        k=1;
        x=n-3;

    }else{
        x=100;
        k=(n-100)/3;

        if((n-100)%3){
            k++;
            x-=(3-(n-100)%3);
        }
    }
    cout << x << endl;
    cout << k << endl;

    return 0;
}
