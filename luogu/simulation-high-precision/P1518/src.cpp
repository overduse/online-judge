#include <iostream>
#include <cstdio>

#define MAXN 11

using namespace std;

char c[11][11];
int cnt, xf, yf, xc, yc;
int dirf=0, dirc=0;
void nextfarm();
void nextcow();
int loop_check[400010];

int main(){
    // freopen("data.in", "r", stdin);
    // freopen("data.out", "w", stdout);

    for(int i=1; i<MAXN; i++){
        for(int j=1; j<MAXN; j++){
            cin >> c[i][j];
            if(c[i][j]=='F'){
                xf=i;
                yf=j;
                c[i][j]='.';
            }
            if(c[i][j]=='C'){
                xc=i;
                yc=j;
                c[i][j]='.';
            }
        }
    }
    int idx;
    while(!((xf==xc)&&(yf==yc))){
        idx=(xf-1)+(yf-1)*10+dirf*100
            +(xc-1)*1000+(yc-1)*10000+dirc*100000;
        if(loop_check[idx]!=0){
            cout << 0 << endl;
            break;
        }
        loop_check[idx]=1;
        nextfarm();
        nextcow();
        cnt++;
    }
    if((xf==xc)&&(yf==yc)) cout << cnt << endl;
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}

void nextfarm(){
    if(dirf==0){
       if(c[xf-1][yf]!='*' && xf-1>0){
            xf=xf-1;
            yf=yf;
        }else dirf+=1;
    }else if(dirf==1){
       if(c[xf][yf+1]!='*' && yf+1<=10){
            xf=xf;
            yf=yf+1;
        }else dirf+=1;
    }else if(dirf==2){
       if(c[xf+1][yf]!='*' && xf+1<=10){
            xf=xf+1;
            yf=yf;
        }else dirf+=1;
    }else if(dirf==3){
       if(c[xf][yf-1]!='*' && yf-1>0){
            xf=xf;
            yf=yf-1;
        }else dirf=0;
    }
    // end of while loop
}
void nextcow(){
    if(dirc==0){
       if(c[xc-1][yc]!='*' && xc-1>0){
            xc=xc-1;
            yc=yc;
        }else dirc+=1;
    }else if(dirc==1){
       if(c[xc][yc+1]!='*' && yc+1<=10){
            xc=xc;
            yc=yc+1;
        }else dirc+=1;
    }else if(dirc==2){
       if(c[xc+1][yc]!='*' && xc+1<=10){
            xc=xc+1;
            yc=yc;
        }else dirc+=1;
    }else if(dirc==3){
       if(c[xc][yc-1]!='*' && yc-1>0){
            xc=xc;
            yc=yc-1;
        }else dirc=0;
    }
}
