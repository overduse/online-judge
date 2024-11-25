#include <iostream>
#define MAXN 220

using namespace std;
int sa[MAXN], sb[MAXN];

int main(){
    int n, na, nb;
    cin >> n >> na >> nb;

    for(int i=0; i<na; i++){
        cin >> sa[i];
    }
    for(int i=0; i<nb; i++){
        cin >> sb[i];
    }

    int win=0, lose=0;
    for(int i=0; i<n; i++){
        int a, b;
        a=sa[i%na];
        b=sb[i%nb];

        if(a==b){
            continue;
        }
        else if((a==0 && (b==2||b==3))
                || (a==1 && (b==0||b==3))
                || (a==2 && (b==1||b==4))
                || (a==3 && (b==2||b==4))
                || (a==4 && (b==0||b==1))
            ){
                win++;
        }else{
            lose++;
        }

    }
    cout << win << " " << lose;

    return 0;
}
