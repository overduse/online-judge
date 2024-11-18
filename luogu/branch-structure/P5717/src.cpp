#include <iostream>

using namespace std;

void sort(int &a, int &b, int &c);
void checkTrianger(int a, int b, int c);

int main(){

    int a, b, c;
    cin >> a >> b >> c;
    sort(a, b, c);
    checkTrianger(a, b, c);
    return 0;
}

void sort(int &a, int &b, int &c){
    if(a>b){
        int temp = a;
        a = b;
        b = temp;
    }
    if(a>c){
        int temp = a;
        a = c;
        c = temp;
    }
    if(b>c){
        int temp = b;
        b = c;
        c = temp;
    }

}

void checkTrianger(int a, int b, int c){
    if(a+b<=c){
        cout << "Not triangle" << endl;
    }else{
        if(a*a+b*b>c*c){
            cout << "Acute triangle" << endl;
        }else if(a*a+b*b==c*c){
            cout << "Right triangle" << endl;
        }else if(a*a+b*b<c*c){
            cout << "Obtuse triangle" << endl;
        }
        if(a==b || b==c){
            cout << "Isosceles triangle" << endl;
        }
        if(a==b && b==c){
            cout << "Equilateral triangle" << endl;
        }
    }

}
