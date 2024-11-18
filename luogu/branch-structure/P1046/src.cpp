#include <iostream>

using namespace std;

int main(){
    int a[10]={0};
    for(int i=0; i<10; i++){
        cin >> a[i];
    }

    int height, cnt=0;
    cin >> height;

    for(int i=0; i<10; i++){
        if(a[i]<=height+30){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}
