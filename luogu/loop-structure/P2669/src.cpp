#include <iostream>

using namespace std;

int findN(int x);
int main(){

    int k; cin >> k;
    int result = 0, cnt = 0;
    for(int i=1; i<=findN(k); i++){
        result += i*i;
        cnt += i;
    }
    result -= findN(k)*(cnt-k);
    cout << result << endl;

    return 0;
}

int findN(int x){
    int n=0, sum=0;
    while(sum<x){
        n++;
        sum+=n;
    }
    return n;
}
