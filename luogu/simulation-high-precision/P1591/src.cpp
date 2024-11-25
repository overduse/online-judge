#include <iostream>
#include <cstdio>
#include <cstring>
#define LEN 10100
int a[LEN], b[LEN], c[LEN];
using namespace std;

void clear(int a[]);
void read(int a[]);
void print(int a[]);
void mul_short(int a[], int b, int c[]);

int main(){
    int t; cin >> t;
    for(int i=0; i<t; i++){
        int n, digit;
        cin >> n >> digit;
        clear(a); a[0]=1;
        for(int j=1; j<=n; j++){
            mul_short(a, j, c);
            for(int k=0; k<LEN; k++)
                a[k]=c[k];
        }
        int cnt=0, lc=LEN-1;
        while(true){
            // cout << lc << endl;
            if(c[lc]!=0) break;
            lc--;
        }
        for(int i=0; i<=lc; i++){
            if(c[i]==digit) cnt++;
        }
        cout << cnt << endl;
    }
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
void mul_short(int a[], int b, int c[]){

  clear(c);
  for (int i = 0; i < LEN - 1; ++i) {
    c[i] += a[i] * b;
    if (c[i] >= 10) {
      c[i + 1] += c[i] / 10;
      c[i] %= 10;
    }
  }
}
