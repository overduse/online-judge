#include <iostream>
#include <string>

using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    int a;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a==1){
            string st; cin >> st;
            s=s+st;
            cout << s << endl;
        }else if(a==2){
            int b, c;
            cin >> b >> c;
            s= s.substr(b, c);
            cout << s << endl;
        }else if(a==3){
            int b; string st;
            cin >> b >> st;
            s.insert(b, st);
            cout << s << endl;
        }else if(a==4){
            string st; cin >> st;
            if(s.find(st)<s.size())
                cout << s.find(st) << endl;
            else
                cout << -1 << endl;
        }
    }

    return 0;
}
