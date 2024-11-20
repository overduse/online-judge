#include <iostream>

using namespace std;
int a[90];
int main(){

    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int idx=0, maxn=0;

    for(int i=1; i<=s1; i++)
        for(int j=1; j<=s2; j++)
            for(int k=1; k<=s3; k++)
                a[i+j+k]++;

    for(int i=1; i<=s1+s2+s3; i++){
        if(a[i]>maxn){
            idx=i;
            maxn=a[i];
        }
    }
    cout << idx << endl;

    return 0;
}
