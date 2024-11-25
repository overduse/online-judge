#include <iostream>
#include <string>
#include <algorithm>
#define MAXN 120

using namespace std;

struct node{
    string name;
    string pos;
    long long contribute;
    int lv;
    int idx;
}nodes[MAXN];

int map(string a){
    int ret;
    if (a=="BangZhu") ret = 0;
    else if (a=="FuBangZhu") ret = 1;
    else if (a=="HuFa") ret = 2;
    else if (a=="ZhangLao") ret = 3;
    else if (a=="TangZhu") ret = 4;
    else if (a=="JingYing") ret = 5;
    else if (a=="BangZhong") ret = 6;
    return ret;
}

bool compare_node1(node x, node y){
    if(x.contribute == y.contribute)
        return x.idx<y.idx;
    else return x.contribute > y.contribute;
}
bool compare_node2(node x, node y){
    if(map(x.pos)==map(y.pos)){
        if(x.lv == y.lv) return x.idx < y.idx;
        return x.lv > y.lv;
    }
    return map(x.pos) < map(y.pos);
}

int main(){
    //
    // freopen("data.in", "r", stdin);
    // freopen("data.out", "w", stdout);

    int n; cin >> n;
    for(int i=1; i<=n; i++){
        cin >> nodes[i].name >> nodes[i].pos
            >> nodes[i].contribute >> nodes[i].lv;
        nodes[i].idx=i;
    }
    sort(nodes+4, nodes+1+n, compare_node1);

    for(int i=1; i<=n; i++){
        if(i==1) nodes[i].pos="BangZhu";
        else if(i==2 || i==3) nodes[i].pos="FuBangZhu";
        else if(i==4 || i==5) nodes[i].pos="HuFa";
        else if(i>=6 && i<=9) nodes[i].pos="ZhangLao";
        else if(i>=10 && i<=16) nodes[i].pos="TangZhu";
        else if(i>=17 && i<=41) nodes[i].pos="JingYing";
        else nodes[i].pos="BangZhong";
    }
    sort(nodes+1, nodes+n+1, compare_node2);
    for(int i=1; i<=n; i++){
        cout << nodes[i].name << " " << nodes[i].pos
             << " " << nodes[i].lv << endl;
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
