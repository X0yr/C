#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x = 14.26;
    double y =  -1.22;
    double z = 3.5*pow(10, -2);
    
    double c = 2.*cos(x-2./3.);
    double b = 1./2.+pow(sin(y), 2);
    double a = 1.+(pow(z, 2)/(3.-pow(z, 2)/5.));
    cout << c/b*a;
}