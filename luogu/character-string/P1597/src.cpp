#include <iostream>
#include <map>

using namespace std;
map<char, int> num;
string s;
int main(){
    cin >> s;
    num['a']=0; num['b']=0; num['c']=0;
    int len=s.length();
    for(int i=0; i<len; i+=5){
        if(s[i+3]>='0' && s[i+3]<='9'){
            num[s[i]]=s[i+3]-'0';
        }else{
            num[s[i]]=num[s[i+3]];
        }
    }
    cout << num['a'] << " "<< num['b']<<" " << num['c'] <<endl;
    return 0;
}
