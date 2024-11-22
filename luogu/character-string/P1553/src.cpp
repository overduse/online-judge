#include <iostream>

using namespace std;
int main(){
    string s; cin >> s;

    if(s.find('%')!=std::string::npos){
        int len=s.length();
        long long output=0;
        string num=s.substr(0, len-1);
        for(int i=len-2; i>=0; i--){
            output = output*10+(num[i]-'0');
        }
        cout << output << "%" << endl;

    }else if(s.find('.')!=std::string::npos){
        int pos=s.find('.');
        int len=s.length();
        long long output1=0, output2=0;
        for(int i=pos-1; i>=0; i--){
            output1=output1*10+(s[i]-'0');
        }
        for(int i=len-1; i>pos; i--){
            output2=output2*10+(s[i]-'0');
        }
        if(output2){
            while(output2%10==0){
                output2/=10;
            }
        }
        cout << output1 << "." << output2 << endl;

    }else if(s.find('/')!=std::string::npos){
        int pos=s.find('/');
        int len=s.length();
        long long output1=0, output2=0;
        for(int i=pos-1; i>=0; i--){
            output1=output1*10+(s[i]-'0');
        }
        for(int i=len-1; i>pos; i--){
            output2=output2*10+(s[i]-'0');
        }
        cout << output1 << "/" << output2 << endl;

    }else{
        int len=s.length();
        long long output=0;
        for(int i=len-1; i>=0; i--){
            output=output*10+(s[i]-'0');
        }
        cout << output << endl;

    }
    return 0;
}
