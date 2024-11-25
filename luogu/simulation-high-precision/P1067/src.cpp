#include <iostream>
#define MAXN 110

using namespace std;
int a[MAXN];
int top;

int main(){
    int n; cin >> n;

    for(int i=0; i<=n; i++){
        cin >> a[top++];
    }
    // cout << top;

    for(int i=0; i<=n; i++){

        int b=a[i];
        if(b==0) continue;
        else if(b<0){
            cout << '-';
            b=-b;
            if(b>1 && n-i>1) cout << b << "x^"<< n-i;
            else if(b==1 && n-i>1) cout << "x^" << n-i;
            else if(b>1 && n-i==1) cout << b << "x";
            else if(b==1 && n-i==1) cout << "x";
            else cout << b;

        }else{
            if(n-i!=n) cout << '+';
            if(b>1 && n-i>1) cout << b << "x^"<< n-i;
            else if(b==1 && n-i>1) cout << "x^" << n-i;
            else if(b>1 && n-i==1) cout << b << "x";
            else if(b==1 && n-i==1) cout << "x";
            else cout << b;
        }
    }
    return 0;
}
