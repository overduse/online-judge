#include <iostream>
#include <cstdio>
#include <string>

using namespace std;
//ERROR:
int main(){
    int n; cin >> n;
    string ans[5];

    for(int i=0; i<n; i++){
        int num;
        scanf("%1d", &num);
        // cout << num << endl;
        // cout << flag << endl;

        if(num==0){
            ans[0]+="XXX.";
            ans[1]+="X.X.";
            ans[2]+="X.X.";
            ans[3]+="X.X.";
            ans[4]+="XXX.";
        }else if(num==1){
            ans[0]+="..X.";
            ans[1]+="..X.";
            ans[2]+="..X.";
            ans[3]+="..X.";
            ans[4]+="..X.";
        }else if(num==2){
            ans[0]+="XXX.";
            ans[1]+="..X.";
            ans[2]+="XXX.";
            ans[3]+="X...";
            ans[4]+="XXX.";
        }else if(num==3){
            ans[0]+="XXX.";
            ans[1]+="..X.";
            ans[2]+="XXX.";
            ans[3]+="..X.";
            ans[4]+="XXX.";
        }else if(num==4){
            ans[0]+="X.X.";
            ans[1]+="X.X.";
            ans[2]+="XXX.";
            ans[3]+="..X.";
            ans[4]+="..X.";
        }else if(num==5){
            ans[0]+="XXX.";
            ans[1]+="X...";
            ans[2]+="XXX.";
            ans[3]+="..X.";
            ans[4]+="XXX.";
        }else if(num==6){
            ans[0]+="XXX.";
            ans[1]+="X...";
            ans[2]+="XXX.";
            ans[3]+="X.X.";
            ans[4]+="XXX.";
        }else if(num==7){
            ans[0]+="XXX.";
            ans[1]+="..X.";
            ans[2]+="..X.";
            ans[3]+="..X.";
            ans[4]+="..X.";
        }else if(num==8){
            ans[0]+="XXX.";
            ans[1]+="X.X.";
            ans[2]+="XXX.";
            ans[3]+="X.X.";
            ans[4]+="XXX.";
        }else if(num==9){
            ans[0]+="XXX.";
            ans[1]+="X.X.";
            ans[2]+="XXX.";
            ans[3]+="..X.";
            ans[4]+="XXX.";
        }

    }
    for(int i=0; i<5; i++){
        cout << ans[i].substr(0, ans[i].length()-1) << endl;
    }

    return 0;
}
