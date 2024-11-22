#include <iostream>

using namespace std;

int main(){

    string s; cin >> s;
    int cnt_boy=0, cnt_girl=0;

    int len=s.length();
    for(int i=0; i<len-2; i++){
        cnt_boy += (s[i]=='b'||s[i+1]=='o'||s[i+2]=='y');
    }
    for(int i=0; i<len-3; i++){
        cnt_girl += (s[i]=='g'||s[i+1]=='i'||s[i+2]=='r'||s[i+3]=='l');
    }
    cout << cnt_boy << endl;
    cout << cnt_girl << endl;
    return 0;
}
