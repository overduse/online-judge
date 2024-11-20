#include <iostream>

#define MAXN 110

using namespace std;
int a[MAXN];

int main(){

    int len=0, temp;
    do{
        cin>>temp;
        a[len] = temp;
        len++;

    }while(temp!=0);

    for(int i=len-2; i>=0; i--){
        cout << a[i] << " ";
    }

    return 0;
}
