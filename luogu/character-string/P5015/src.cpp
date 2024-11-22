#include <iostream>

using namespace std;

int main(){

    string s;
    int cnt=0;
    while(cin>>s){
        int len=s.length();
        for(int i=0; i<len; i++){
            if(s[i]>='0' && s[i]<='9') cnt++;
            else if(s[i]>='a' && s[i]<='z') cnt++;
            else if(s[i]>='A' && s[i]<='Z') cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
