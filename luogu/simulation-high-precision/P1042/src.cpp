#include <iostream>
#define MAXN 62550

using namespace std;

int top;
int result[MAXN];

int main(){
    char c;
    while(cin>>c && c!='E'){
        if(c=='W') result[++top]=1;
        else result[++top]=2;
    }

    int win=0, lose=0;
    for(int i=1; i<=top+1; i++){

        if(result[i]==1) win++;
        else if(result[i]==2) lose++;
        else{
            cout << win << ':' << lose << endl;
            win=0; lose=0;
            break;
        }

        if(abs(win-lose)>=2 && (win>10 || lose>10)){
            cout << win << ':' << lose << endl;
            win=0;
            lose=0;
        }
    }

    cout << endl;

    win=0; lose=0;
    for(int i=1; i<=top+1; i++){

        if(result[i]==1) win++;
        else if(result[i]==2) lose++;
        else{
            cout << win << ':' << lose << endl;
            win=0; lose=0;
            break;
        }

        if(abs(win-lose)>=2 && (win>20 || lose>20)){
            cout << win << ':' << lose << endl;
            win=0;
            lose=0;
        }
    }

    return 0;
}
