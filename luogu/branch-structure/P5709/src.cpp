#include <iostream>
#include <cmath>

using namespace std;

int min(int a, int b);

int main(){

    int m, t, s;
    cin >> m >> t >> s;

    if(t == 0){
        cout << 0 << endl;
    }else{
        cout << m - min(ceil(s*1.0/t), m) << endl;
    }

    return 0;
}

int min(int a, int b){
    return a<b? a:b;
}
