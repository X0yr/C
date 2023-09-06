#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x = 0.4*pow(10, 4);
    double y =  -0.875;
    double z = -0.475*pow(10, -3);
    double c = pow(abs(cos(x)-cos(y)), (1.+(2*pow(sin(y), 2))));
    double b = 1.+z+(pow(z, 2)/2.)+(pow(z, 3)/3.)+(pow(z, 4)/4.);
    cout << c*b;
}