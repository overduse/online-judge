#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long ans=0;
    int num=0;
    int t;
    while(cin>>t){
        num++;
        ans+=t;
    }
    ans = ans*pow(2, num-1);
    cout << ans << endl;
    return 0;
}
