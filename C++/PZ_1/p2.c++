#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x = -4.5;
    double y =  0.000075;
    double z = -84.5;
    double c = (cbrt(9.+pow((x-y), 2))) / (pow(x, 2) + pow(y, 2) + 2.);
    double b = (exp(abs(x-y))) * pow(tan(z), 3);
    cout << c-b
}