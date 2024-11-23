#include <iostream>
#define MAXN 1010

using namespace std;

struct student{
    string name;
    int cn;
    int math;
    int eng;
}s[MAXN];

int main(){
    int n; cin >> n;
    int idx=0, maxn=0;

    for(int i=0; i<n; i++){
        cin >> s[i].name >> s[i].cn
            >> s[i].math >> s[i].eng;
        int total= s[i].cn + s[i].math + s[i].eng;
        if(total>maxn){
            idx=i;
            maxn=total;
        }
    }
    cout << s[idx].name << " " << s[idx].cn
         << " " << s[idx].math << " "
         << s[idx].eng << endl;
    return 0;
}
