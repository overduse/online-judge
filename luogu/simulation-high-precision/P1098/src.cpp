#include <iostream>
#include <string>
using namespace std;
string s;
bool check_exp(int pos);
bool is_number(char c);
bool is_alphabet(char c);
int main(){

    int p, q, l;
    cin >> p >> q >> l;
    cin >> s;
    int pos=0;
    while(s.find('-', pos)!=std::string::npos){
        pos=s.find('-', pos);
        if(check_exp(pos)){
            string temp=s.substr(0, pos);
            if(is_alphabet(s[pos-1])){
                if(l==1){
                    for(int i=s[pos-1]+1; i<s[pos+1]; i++){
                        for(int j=0; j<q; j++){
                            if(p==1) temp+=i;
                            else if(p==2) temp+=i-32;
                            else if(p==3) temp+='*';
                        }
                    }
                    s=temp+s.substr(pos+1);
                }else if(l==2){
                    for(int i=s[pos+1]-1; i>s[pos-1]; i--){
                        for(int j=0; j<q; j++){
                            if(p==1) temp+=i;
                            else if(p==2) temp+=i-32;
                            else if(p==3) temp+='*';
                        }
                    }
                    s=temp+s.substr(pos+1);
                }
            }else if(is_number(s[pos-1])){
                if(l==1){
                    for(int i=s[pos-1]+1; i<s[pos+1]; i++){
                        for(int j=0; j<q; j++){
                            if(p==3) temp+='*';
                            else temp+=i;
                        }
                    }
                    s=temp+s.substr(pos+1);
                }else if(l==2){
                    for(int i=s[pos+1]-1; i>s[pos-1]; i--){
                        for(int j=0; j<q; j++){
                            if(p==3) temp+='*';
                            else temp+=i;
                        }
                    }
                    s=temp+s.substr(pos+1);
                }
            }
        }else pos++;
    }
    cout << s << endl;
    return 0;
}
bool is_number(char c){
    bool ret=false;
    if(c>='0' && c<='9') ret=true;
    return ret;
}
bool is_alphabet(char c){
    bool ret=false;
    if(c>='a' && c<='z') ret=true;
    return ret;
}
bool check_exp(int pos){
    bool ret=false;
    if(s[pos]=='-' && pos-1>=0 && pos+1<s.length()){
        if(s[pos+1]-s[pos-1]>0 && is_number(s[pos-1]) && is_number(s[pos+1])){
            ret = true;
        }else if(s[pos+1]-s[pos-1]>0 && is_alphabet(s[pos-1]) && is_alphabet(s[pos+1])){
            ret = true;
        }
    }
    return ret;
}
