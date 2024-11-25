#include <iostream>

using namespace std;

int m, n;
int list[510];
struct info{
    int id;
    int cost;
} machine[21][21];

int machine_time[21][100001];
int step[21];
int last_time[21];
int ans=0;

int main(){
    int m, n;
    cin >> m >> n;

    for(int i=1; i<=m*n; i++){
        cin >> list[i];
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> machine[i][j].id;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> machine[i][j].cost;
        }
    }

    for(int i=1; i<=m*n; i++){
        int curr=list[i];
        step[curr]++;
        int id = machine[curr][step[curr]].id;
        int cost = machine[curr][step[curr]].cost;

        int temp=0;
        for(int j=last_time[curr]+1;; j++){
            if(machine_time[id][j]==0){
                temp++;
            }else{
                temp=0;
            }
            if(temp==cost){
                for(int k=j-cost+1; k<=j; k++){
                    machine_time[id][k] = 1;
                }
                if(j>ans) ans=j;
                last_time[curr]=j;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
