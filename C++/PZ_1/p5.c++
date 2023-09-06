#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x = -15.246;
    double y =  4.642*pow(10, -2);
    double z = 21;
    double c = log(pow(y, (-sqrt(abs(x)))));
    double b = x-y/2;
    double a = pow(sin(atan(z)), 2);
    cout << c*b+a;
}