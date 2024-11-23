#include <iostream>

using namespace std;
bool is_skipyear(int n);
int a[500];
int top;
int main(){
    int x, y; cin >> x >> y;
    for(int i=x; i<=y; i++){
        if(is_skipyear(i)){
            a[++top]=i;
        }
    }
    cout << top << endl;
    for(int i=1; i<=top; i++){
        if(i!=1) cout<< " ";
        cout << a[i];
    }

    return 0;
}
bool is_skipyear(int n){
    bool ret;
    if(n%4){
        ret=false;
    }else if(n%100==0 && n%400!=0){
        ret=false;
    }else{
        ret=true;
    }
    return ret;
}
