#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
void print_square(int n);
void print_triangle(int n);


int main(){

    int n; cin >> n;
    print_square(n);
    cout << "\n";
    print_triangle(n);

    return 0;
}
void print_square(int n){
    int weight=1;
    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){
            cout << setfill('0') << setw(2) << weight;
            weight ++;
        }
        cout << endl;
    }

}

void print_triangle(int n){
    int weight=1;
    string s="  ";
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i; j++)
            cout << "  ";
        for(int j=0; j<i; j++){
            cout << setfill('0') << setw(2) << weight;
            weight++;
        }
        cout << endl;
    }
}
