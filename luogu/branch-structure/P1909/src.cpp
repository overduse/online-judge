#include <iostream>
#include <cmath>

using namespace std;

int min(int a, int b, int c);

int main(){

    int n; cin >> n;

    int a, pa, b, pb, c, pc;
    cin >> a >> pa;
    cin >> b >> pb;
    cin >> c >> pc;

    int ma, mb, mc;
    ma = pa * ceil(n*1.0/a);
    mb = pb * ceil(n*1.0/b);
    mc = pc * ceil(n*1.0/c);

    cout << min(ma, mb, mc);

    return 0;
}

int min(int a, int b, int c){
    int temp;
    if(a<=b) temp = a;
    else temp = b;
    if(temp>c) temp = c;

    return temp;
}
