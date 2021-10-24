#include <iostream>
#include <cmath>

using namespace std;

double f1(double y){
    return atan(y);
}
double f2(double x){
    return sqrt(1-x*x);
}

int main() {
    double x0,y0,x1,y1;
    cout << "Enter x0 and y0 from (0, 1) (0, 1)"<< endl;
    cin >> x0 >> y0;
    double e = 1;
    x1 = f1(y0);
    y1 = f2(x0);
    if (abs(x1 - x0) < 0.000001) {
        cout << "( "<< x1 << "; " << y1 << " )" << " || " << "( "<< -x1 << "; " << -y1 << " )" << endl;
        return 0;
    }
    while (e >= 0.000001) {
        x0 = x1;
        y0 = y1;
        x1 = f1(y0);
        y1 = f2(x0);
        e = abs(x1 - x0);
    }
    cout << "( "<< x1 << "; " << y1 << " )" << " || " << "( "<< -x1 << "; " << -y1 << " )" << endl;
    return 0;
}
