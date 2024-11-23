#include <iostream>
#define MAXN 1010
using namespace std;
struct student{
    int number;
    int study;
    int other;
}s[MAXN];

int main(){
    int n; cin >> n;
    for(int i=0; i<n; i++){
        cin >> s[i].number >> s[i].study
            >> s[i].other;
    }
    for(int i=0; i<n; i++){
        if(s[i].study+s[i].other>140 && s[i].study*7+s[i].other*3>=800){
            cout << "Excellent" << endl;
        }else
            cout << "Not excellent" << endl;
    }
    return 0;
}
