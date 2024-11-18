#include <iostream>

using namespace std;
void sort(int &a, int &b, int &c);
int gcd(int a, int b);

int main(){
    int a, b, c; cin >> a >> b >> c;
    sort(a, b, c);
    // cout << gcd(a, c);
    cout << a/gcd(a, c) << '/' << c/gcd(a, c) << endl;

    return 0;
}

void sort(int &a, int &b, int &c){
    int temp;
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    if(a>c){
        temp=a;
        a=c;
        c=temp;
    }
    if(b>c){
        temp=b;
        b=c;
        c=temp;
    }
}



/**
* recursive version
*/

// int gcd(int a, int b){
//     return b? gcd(b, a/b):a;
// }

/**
* loop version
*/
int gcd(int a, int b){
    // loop version
    int r;
    while(b){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
