#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    char x;

    // // C Version
    // scanf("%c", &x);
    // printf("  %c\n %c%c%c\n%c%c%c%c%c", x, x, x, x, x, x, x, x, x);

    // Cpp Version
    cin >> x;
    cout << "  " << x << endl << " " << x << x << x << endl << x
        << x << x << x << x;

    return 0;
}
