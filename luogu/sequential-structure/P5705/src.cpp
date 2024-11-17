#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){

    // // solution 1;
    // char a, b, c, d;
    // scanf("%c%c%c.%c", &a, &b, &c, &d);
    // printf("%c.%c%c%c", a, b, c, d);

    // solution 2;
    string s;
    cin >> s;
    int len = s.size();
    for(int i=len-1;i>=0;i--){
        cout << s[i];
    }
    cout << endl;

    return 0;
}
