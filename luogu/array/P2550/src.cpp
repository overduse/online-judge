#include <iostream>

using namespace std;

int win[7];
int count[7];

bool in_win(int num);
int main(){

    int n; cin >> n;
    for(int i=0; i<7; i++) cin >> win[i];

    for(int i=0; i<n; i++){
        int cnt=0, c;
        for(int j=0; j<7; j++){
            cin >> c;
            if(in_win(c)) cnt++;
        }
        count[7-cnt]++;
    }
    for(int i=0; i<7; i++){
        cout << count[i] << " ";
    }

    return 0;
}
bool in_win(int num){
    bool ret=false;
    for(int i=0; i<7; i++){
        if(win[i]==num)
            ret=true;
    }
    return ret;
}
