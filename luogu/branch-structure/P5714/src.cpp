#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double m, h;
    cin >> m >> h;
    double bmi = m*1.0/(h*h);

    if(bmi<18.5){
        cout << "Underweight";
    }else if(bmi<24){
        cout << "Normal";
    }else{
        cout << setprecision(6) << bmi << endl;
        cout << "Overweight";
    }

    return 0;
}
