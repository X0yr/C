#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x = 0.0374;
    double y =  -0.825;
    double z = 16;
    double c = ((1+pow(sin(x+y), 2)) / (abs(x-((2*y)/(1+pow(x, 2)*pow(y, 2)))))) * pow(x, abs(y));
    double b = pow(cos(atan(1/z)), 2);
    cout << c+b
}