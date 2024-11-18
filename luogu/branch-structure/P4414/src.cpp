#include <iostream>

using namespace std;
void sort(int &a, int &b, int &c);

int main(){
    int a[3]={0};
    string s;
    for(int i=0; i<3; i++)
        cin >> a[i];
    sort(a[0], a[1], a[2]);
    cin >> s;
    cout << a[s[0]-'A'] << " " << a[s[1]-'A']
         << " " << a[s[2]-'A'] << endl;
    return 0;
}

void sort(int &a, int &b, int &c){
    int temp;
    if(a>b){
        temp = a;
        a = b;
        b = temp;
    }
    if(a>c){
        temp = a;
        a = c;
        c = temp;
    }
    if(b>c){
        temp = b;
        b = c;
        c = temp;
    }

}
