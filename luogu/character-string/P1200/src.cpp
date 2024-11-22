#include <iostream>
#include <string>
using namespace std;
int main(){

    string group, star;
    cin >> group >> star;
    int len_group=group.length();
    int len_star=star.length();
    int quad_group=1, quad_star=1;

    for(int i=0; i<len_group; i++){
        quad_group *= group[i]-'A'+1;
    }
    for(int i=0; i<len_star; i++){
        quad_star *= star[i]-'A'+1;
    }
    if(quad_group%47==quad_star%47) cout << "GO" << endl;
    else cout << "STAY" << endl;
    return 0;
}
