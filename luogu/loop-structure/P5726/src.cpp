#include <iostream>
#include <iomanip>
#define MAXN 1010
using namespace std;
int a[MAXN];

int main(){
    int maxn=0, minn=10;
    int n; cin >> n;
    int sum=0, cnt=0;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        sum+=a;
        cnt++;
        if(a>maxn) maxn=a;
        if(a<minn) minn=a;
    }
    double result = 1.0 * (sum-maxn-minn)/(cnt-2);
    cout << fixed << setprecision(2) << result << endl;

    return 0;
}
