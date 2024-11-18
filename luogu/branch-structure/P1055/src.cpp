#include <iostream>
#include <string>

using namespace std;

int main(){

    string s;
    cin >> s;

    int sum=0, weight=1;
    for(int i=0; i<(int)s.length()-1; i++){
        if(s[i]!='-'){
            sum += weight*(s[i]-'0');
            weight++;
        }
    }
    sum %= 11;

    if(sum+'0' == s[s.length()-1] || (sum==10) && (s[s.length()-1])=='X'){
        cout << "Right" << endl;
    }else{
        s[s.length()-1] = sum==10? 'X':sum+'0';
        cout << s << endl;
    }

    return 0;
}
