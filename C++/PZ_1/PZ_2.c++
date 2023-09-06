#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double y;
    double s;
    cout << "Ввeдите число" << endl;
    cin >> x;
    cout << "Ввeдите второе число" << endl;
    cin >> y;
    if(x > y){
        s = cbrt(abs(x-y))+tan(x);
        cout << s;
    }
    else if(x < y){
        s = pow((y-x), 3)+ cos(x);
        cout << s;
    }
    else{
        s = (pow((y+x), 2)) + pow(x, 3);
        cout << s;
    }
}
