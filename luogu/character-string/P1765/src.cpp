#include <iostream>
#include <string>

using namespace std;

int main(){

    string line;
    string s[8]={"abc", "def", "ghi", "jkl", "mno", "pqrs",
    "tuv", "wxyz"};
    // for(int i=0; i<8; i++)
    //     cout << s[i] << endl;
    int cnt=0, len;
    getline(cin, line);
    len = line.length();
    for(int i=0; i<len; i++){
        if(line[i]==' ') cnt++;
        else{
            for(int j=0; j<8; j++){
                if(s[j].find(line[i])!=std::string::npos){
                    cnt+= s[j].find(line[i])+1;
                    break;
                }else continue;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}
