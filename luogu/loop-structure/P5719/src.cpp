#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n, k; cin >> n >> k;
    double acca=0, accb=0;
    int cnta=0, cntb=0;
    for(int i=1; i<n+1; i++){
        if(i%k==0){
            acca += i;
            cnta++;
        }else{
            accb +=i;
            cntb++;
        }
    }
    cout << fixed << setprecision(1) << acca/cnta << " " << accb/cntb << endl;

    return 0;
}
