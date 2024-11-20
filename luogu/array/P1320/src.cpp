#include <iostream>
#include <cmath>
#define MAXN 40010

using namespace std;
int a[MAXN], idx=1;
int main(){
    char c;
    int flag=0, cnt=0, tot=0;
    while(cin >> c){
        tot++;
        if((c-'0')==flag){
            cnt++;
        }else{
            flag=!flag;
            a[idx]=cnt;
            idx++;
            cnt=1;
        }
    }
    a[idx]=cnt;
    cout << sqrt(tot) << " ";
    for(int i=1; i<idx; i++)
        cout << a[i] << " ";
    cout << a[idx];

    return 0;
}
