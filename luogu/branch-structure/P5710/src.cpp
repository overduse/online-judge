#include <iostream>

using namespace std;

int feat1(int x);
int feat2(int x);

int main(){

    int x;
    cin >> x;

    bool a, b, c, d;
    bool flag1 = feat1(x), flag2 = feat2(x);

    a = flag1 && flag2;
    b = flag1 || flag2;
    c = (flag1 && !flag2)||(!flag1 && flag2);
    d = !(flag1 || flag2);
    cout << a << " " << b << " " << c << " " << d;
    return 0;
}

int feat1(int x){
    return !(x%2);
}

int feat2(int x){
    return (x>4 && x<=12);
}
