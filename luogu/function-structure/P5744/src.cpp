#include<iostream>

using namespace std;
struct student{
    string name;
    int age;
    int score;
} a[5];

int main(){
    int n; cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i].name >> a[i].age >> a[i].score;
    }
    for(int i=0; i<n; i++){
        cout << a[i].name << " ";
        cout << a[i].age+1<< " ";
        int score = 1.2 * a[i].score;
        if(score<600) cout << score << endl;
        else cout << 600 << endl;
    }
    return 0;
}
