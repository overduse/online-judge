#include<iostream>
#include<cstdio>
using namespace std;
int len(int num);
int main(){
    int n,x,a,b;
    char c;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        int x;
        switch(s[0]){
            case 'a':
                cin>>a>>b;
                printf("%d+%d=%d\n",a,b,a+b);
                x=len(a+b)+2;
                c=s[0];break;

            case 'b':
                cin>>a>>b;
                printf("%d-%d=%d\n",a,b,a-b);
                x=len(a-b)+2;
                c=s[0];break;

            case 'c':
                cin>>a>>b;
                printf("%d*%d=%d\n",a,b,a*b);
                x=len(a*b)+2;
                c=s[0];break;

            default:
                cin>>b;
                a=0;
                int l=s.size();
                for(int i=0;i<l;i++)
                    a=10*a+s[i]-'0';
                switch(c){
                    case 'a':printf("%d+%d=%d\n",a,b,a+b);x=len(a+b)+2;break;
                    case 'b':printf("%d-%d=%d\n",a,b,a-b);x=len(a-b)+2;break;
                    case 'c':printf("%d*%d=%d\n",a,b,a*b);x=len(a*b)+2;break;
                    default: break;
                }
                break;
        }
        x=len(a)+len(b)+x;
        printf("%d\n",x);
    }
    return 0;
}
int len(int num){
    int x;
    if(num==0) x=1;
    else if(num>0){
        x=0;
        while(num>0){
            x++;
            num/=10;
        }
    }else{
        x=1;
        num=-num;
        while(num>0){
            x++;
            num/=10;
        }
    }
    return x;
}
