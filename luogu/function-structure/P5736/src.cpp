#include <iostream>
#include <cmath>
#include <vector>
#define MAXN 110
#define MAXSEIVE 100010

using namespace std;

vector<int> prime;
bool is_prime[MAXSEIVE];
int st[MAXN];
int top;

void Eratosthenes(int n);
int main(){

    int n; cin >> n;
    int cnt=0, max_num=0;
    for(int i=0; i<n; i++){

        int t; cin >> t;
        if(max_num<t) max_num=t;
        st[++top]=t;
    }
    Eratosthenes(max_num);
    for(int i=1; i<=top; i++){
        if(is_prime[st[i]]){
            if(cnt) cout <<" ";
            cout << st[i];
            cnt++;
        }
    }
    return 0;
}
void Eratosthenes(int n){
    is_prime[0] = is_prime[1] = false;
    for(int i=2; i<=n; i++) is_prime[i]=true;
    for(int i=2; i<=n; i++){
        if(is_prime[i]){
            prime.push_back(i);
            if((long long)i*i>n) continue;
            for(int j=i*i; j<=n; j+=i)
                is_prime[j]=false;
        }
    }
}


// bool idx[MAXN];
// int a[MAXN];
//
// bool is_prime(int n);
// int main(){
//
//     int n; cin >> n;
//     for(int i=0; i<n; i++){
//         int temp; cin >> temp;
//         a[i]=temp;
//         idx[i]=is_prime(temp);
//     }
//     int cnt=0;
//     for(int i=0; i<n; i++){
//         if(idx[i]){
//             if(cnt) cout << " ";
//             cnt++;
//             cout << a[i];
//         }
//     }
//
//     return 0;
// }
// bool is_prime(int n){
//     bool flag=true;
//     if(n<2) return false;
//     else{
//         for(int i=2; i<=sqrt(n); i++){
//             if(n%i==0){
//                 flag=false;
//                 break;
//             }
//         }
//     }
//     return flag;
// }
