#include <iostream>
#include <string>

using namespace std;

int main(){
    string t, s;
    getline(cin, t);
    getline(cin, s);

    for(int i=0; i<t.length(); i++)
        t[i]=tolower(t[i]);
    for(int i=0; i<s.length(); i++)
        s[i]=tolower(s[i]);

    t = ' ' + t + ' ';
    s = ' ' + s + ' ';

    if(s.find(t)==std::string::npos){
        cout << -1 << endl;
    }else{
        int cnt=0;
        int rec = s.find(t);
        int pos = s.find(t);
        while(pos!=std::string::npos){
            cnt++;
            pos=s.find(t, pos+1);
        }
        cout << cnt << " " << rec << endl;
    }

    return 0;
}
