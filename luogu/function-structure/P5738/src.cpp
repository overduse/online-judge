#include <iostream>
#include <iomanip>
#define MAXN 21

using namespace std;
struct student{
    double score=0;
}s[MAXN];
double final[MAXN];

int main(){
    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        int minn=10, maxn=0;
        for(int j=0; j<m; j++){
            int t; cin >> t;
            if(t>maxn) maxn=t;
            if(t<minn) minn=t;
            s[i].score+=t;
        }
        s[i].score -= (maxn+minn);
        final[i] = s[i].score/(m-2);

    }
    double maxn=0;
    for(int i=0; i<n; i++){
        if(maxn<final[i])
            maxn=final[i];
    }
    cout << fixed << setprecision(2) << maxn << endl;
    return 0;
}
