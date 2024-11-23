#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
double Euclidean(double x1, double y1, double x2, double y2);
int main(){

    double dist=0;
    double x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    dist+=Euclidean(x1, y1, x2, y2);
    dist+=Euclidean(x1, y1, x3, y3);
    dist+=Euclidean(x2, y2, x3, y3);
    cout << fixed << setprecision(2) << dist << endl;

    return 0;
}
double Euclidean(double x1, double y1, double x2, double y2){
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
