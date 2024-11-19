#include <iostream>

using namespace std;

int count(int number, int digit);

int main(){

    int result=0;
    int n, x; cin >> n >> x;
    for(int i=1; i<=n; i++){
        result += count(i, x);
    }
    cout << result << endl;
    return 0;
}

int count(int number, int digit){

    int cnt=0;
    while(number){
        if(number%10 == digit){
            cnt++;
        }
        number /= 10;
    }
    return cnt;
}
