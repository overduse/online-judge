#include <iostream>
#define MAXN 100100
using namespace std;
struct toys{
    int n;
    string name;
} toy[MAXN];
int top;

int nexttoy(int curr, int face, int direc, int num);

int main(){

    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> toy[top].n >> toy[top].name;
        top++;
    }
    int direc, length, curr=0;
    for(int i=0; i<m; i++){
        cin >> direc >> length;
        curr=nexttoy(curr, toy[curr].n, direc, length);
    }
    cout << toy[curr].name << endl;

    return 0;
}
int nexttoy(int curr, int face, int direc, int num){

    if((face==0 && direc==1) ||
       (face==1 && direc==0)){
        curr += num;
        curr %= top;
    }else{
        curr -= num;
        while(curr<0)
            curr +=top;
    }
    return curr;
}
