#include <iostream>
using namespace std;
int main(){
    int n, cnt=0; cin >> n;
    string s;
    char prev, curr;
    for(int i=0; i<n; i++){
        if(i!=0) prev=curr;
        cin >> curr;
        s+=curr;
        if(i!=0 && prev=='V' && curr=='K'){
            cnt++;
            s=s.substr(0, s.length()-2)+'X';
        }
    }
    if(s.find("VV")!=std::string::npos || s.find("KK")!=std::string::npos){
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
