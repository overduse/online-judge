#include <csignal>
#include <iostream>
#include <string>
#define MAXN 1010

using namespace std;
struct student{
    string name;
    int cn;
    int math;
    int en;
    int total;
}s[MAXN];

int main(){
    int n; cin >> n;
    for(int i=0; i<n; i++){
        cin>>s[i].name>>s[i].cn>>s[i].math>>s[i].en;
        s[i].total = s[i].cn+ s[i].math + s[i].en;
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(abs(s[i].cn-s[j].cn)<=5 && abs(s[i].math-s[j].math)<=5 && abs(s[i].en-s[j].en)<=5
            && abs(s[i].total-s[j].total)<=10){
                cout << s[i].name << " " << s[j].name << endl;
            }
        }
    }
    return 0;
}
