#include <iostream>

using namespace std;
void swap(int &a, int &b);

int main(){

    int a, b, c;
    cin >> a >> b >> c;

    if(a>b) swap(a, b);
    if(b>c) swap(b, c);
    if(a>b) swap(a, b);

    cout << a << " " << b << " " << c;

    return 0;
}

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
