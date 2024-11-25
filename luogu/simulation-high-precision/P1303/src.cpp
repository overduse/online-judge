#include <cstdio>
#include <cstring>
#define LEN 10010

using namespace std;
int a[LEN], b[LEN], c[LEN];
void clear(int a[]);
void read(int a[]);
void print(int a[]);
void mul(int a[], int b[], int c[]);

int main(){
    read(a);
    read(b);
    mul(a, b, c);
    print(c);

    return 0;
}
void clear(int a[]){
    for(int i=0; i<LEN; i++)
        a[i]=0;
}
void read(int a[]){
    static char s[LEN+1];
    scanf("%s", s);
    clear(a);

    int len = strlen(s);
    for(int i=0; i<len; i++)
        a[len-i-1] = s[i]-'0';
}
void print(int a[]){
    int i;
    for(i = LEN - 1; i >= 1; i--){
        if(a[i]!=0) break;
    }
    for(; i>=0; i--) putchar(a[i]+'0');
    putchar('\n');
}
void mul(int a[], int b[], int c[]){
    clear(c);

    for (int i=0; i<LEN-1; i++){
        for(int j=0; j<=i; j++)
            c[i] += a[j] * b[i-j];

        if(c[i]>=10){
            c[i + 1] += c[i]/10;
            c[i] %= 10;
        }
    }
}
