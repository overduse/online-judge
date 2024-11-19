#include <iostream>

using namespace std;

int main(){

    int n; cin >> n;
    int record = 1;
    int len=1;
    int prev;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        if(i>0){
            if(prev==a-1){
                len++;
                if(len>record) record=len;
            }else{
                len=1;
            }
        }
        prev=a;
    }

    cout << record << endl;

    return 0;
}
