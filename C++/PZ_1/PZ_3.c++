#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double y;
    cout << "Ввeдите число" << endl;
    cin >> x;
    for(int n = 1; n<=20; n++){
        y+=((pow(n, 2)+1)/n)*(pow((x/2), n));
    }
    cout << y <<endl;
}
