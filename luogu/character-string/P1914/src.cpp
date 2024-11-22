#include <iostream>
#include <string>

using namespace std;

string alphabet="abcdefghijklmnopqrstuvwxzy";

int main(){
    int n; cin >> n;
    string s; cin >> s;

    int len = s.length();
    for(int i=0; i<len; i++){
        s[i]= 'a'+(s[i]-'a'+n)%26;
    }
    cout << s;

    return 0;
}
