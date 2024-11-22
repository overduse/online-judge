#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int a[26];
bool is_prime(int n);
int main(){
    string s;
    cin >> s;
    int len = s.length(), idx;
    for(int i=0; i<len; i++){
        idx=s[i]-'a';
        a[idx]++;
    }
    int minn=100, maxn=0;
    for(int i=0; i<26; i++){
        if(a[i]<minn && a[i]!=0) minn=a[i];
        if(a[i]>maxn && a[i]!=0) maxn=a[i];
    }
    if(is_prime(maxn-minn)){
        cout << "Lucky Word\n";
        cout << maxn-minn;
    }else{
        cout << "No Answer\n" << 0;
    }

    return 0;
}

bool is_prime(int n){
    bool ret=true;
    if(n<2) ret=false;
    for(int i=2; i<=sqrt(n); i++){
        if(!n%i){
            ret=false;
            break;
        }
    }
    return ret;
}
