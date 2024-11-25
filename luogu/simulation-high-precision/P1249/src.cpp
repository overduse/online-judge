#include <iostream>
#define MAXN 10010

using namespace std;
int s[MAXN], a[MAXN];
int len=1;
void mul(int x);
int main(){
    int n; cin >> n;
    if(n<=4){
        cout << n << endl;
        cout << n << endl;
    }else{
        s[0]=s[1]=1;
        int sum=0, top=0;
        for(int i=2; sum<n; i++){
            a[++top]=i;
            sum+=i;
        }

        if(sum>n+1) a[sum-n-1]=0;
        else if(sum==n+1) a[top]++, a[1]=0;

        for(int i=1; i<=top; i++){
            if(a[i]){
                cout << a[i] << " ";
                mul(a[i]);
            }
        }
        cout<< endl;

        for(int i=len; i>=1; i--)
            cout << s[i];
        cout << endl;
    }

    return 0;
}
void mul(int x){
    for(int i=1; i<=len; i++)
        s[i]*=x;
    for(int i=1; i<=len; i++){
        s[i+1]+=s[i]/10;
        s[i]%=10;
    }
    while(s[len+1]>0){
        len++;
        s[len+1] += s[len]/10;
        s[len]%=10;
    }
}
