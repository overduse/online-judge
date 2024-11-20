#include <iostream>

using namespace std;
char c1[11][11];
char c2[11][11];
char c3[11][11];

bool judge1(int n);
bool judge2(int n);
bool judge3(int n);
bool judge4(int n);
bool judge5(int n);
bool judge6(int n);
bool judge7(int n);

int main(){
    int n; cin >> n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin >> c1[i][j];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin >> c2[i][j];

    if(judge1(n)){
        cout << 1;
    }else if(judge2(n)){
        cout << 2;
    }else if(judge3(n)){
        cout << 3;
    }
    else if(judge4(n)){
        cout << 4;
    }else if(judge5(n)){
        cout << 5;
    }else if(judge6(n)){
        cout << 6;
    }else{
        cout << 7;
    }

    return 0;
}

bool judge1(int n){
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(c1[i][j]!=c2[j][n-i+1])
                return false;
    return true;
}
bool judge2(int n){
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(c1[i][j]!=c2[n-i+1][n-j+1])
                return false;
    return true;
}
bool judge3(int n){
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(c1[i][j]!=c2[n-j+1][i])
                return false;
    return true;
}
bool judge4(int n){
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(c1[i][j]!=c2[i][n-j+1])
                return false;
    return true;
}
bool judge5(int n){
    int flag1=1, flag2=2, flag3=3;
    bool ret;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            c3[i][j] = c1[i][n-j+1];

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(c3[i][j]!=c2[j][n-i+1])
                flag1=0;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(c3[i][j]!=c2[n-i+1][n-j+1])
                flag2=0;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(c3[i][j]!=c2[n-j+1][i])
                flag3=0;
    if(flag1|flag2|flag3) ret=true;
    else ret=false;
    return ret;
}

bool judge6(int n){
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(c1[i][j]!=c2[i][j])
                return false;
    return true;
}
