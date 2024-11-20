#include <iostream>

using namespace std;

int main(){

    int n, cnt=0;
    int num, flag=0;
    cin >> n;

    while(cnt < n*n){
        cin >> num;
        for(int i=0; i<num; i++){
            cout << flag;
            cnt++;
            if(cnt%n==0) cout << endl;
        }
        if(flag==0) flag=1;
        else flag=0;
    }

    return 0;
}
