#include <iostream>
#include <string>
using namespace std;
int a[26];
int main(){
    string s;
    while(cin>>s){
        int len = s.length();
        for(int i=0; i<len; i++){
            if(s[i]>='A'&&s[i]<='Z'){
                a[s[i]-'A']++;
            }
        }
    }
    int maxn=0;
    for(int i=0; i<26; i++){
        if(a[i]>maxn) maxn=a[i];
    }

    for(int i=maxn; i>0; i--){
        for(int j=0; j<26; j++){
            //
            if(j) cout <<" ";
            if(a[j]<i) cout <<" ";
            else cout << "*";
        }
        cout << endl;
    }
    cout<<"A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";
    return 0;
}
