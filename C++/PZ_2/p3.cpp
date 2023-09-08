#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x;
    int y;
    char c;
    cout << "Введите первое число" << endl;
    cin >> x;
    cout << "Введите второе число" << endl;
    cin >> y;
    cout << "Введите фунцию" << endl;
    cin >> c;
    switch(c){
        case '+':
            cout << x+y << endl;
            break;
        case '-':
            cout << x-y << endl;
            break;
        case '*':
            cout << x*y << endl;
            break;
        case '^':
            if(y=0){
                cout << "Невозможное деление, введите другое второе число" << endl;
            }
            else{
            cout << pow(x, y) << endl;
            break;
            }
        case '/':
            cout << x/y << endl;
            break;
        case '%':
            cout << x%y << endl;
            break;
        case '|':
            cout << abs(x) << " " << abs(y) << endl;
            break;
        case 'k':
            cout << sqrt(x) << " " << sqrt(y)<< endl;
            break;
        case 's':
            cout << sin(x) << " " << sin(y) << endl;
            break;
        case 'c':
            cout << cos(x) << " " << cos(y) << endl;
            break;
        case 'l':
            cout << log(x) << " " << log(y) << endl;
            break;
        case 'L':
            cout << log10(x) << " " << log10(y) << endl;
            break;
        case 'a':
            cout << asin(x) << " " << asin(y) << endl;
            break;
        case 'e':
            cout << ceil(x) << " " << ceil(y) << endl;
            break;
        case 'f':
            cout << floor(x) << " " << floor(y) << endl;
            break;
        case 'm':
            cout << fmod(x, y) << endl;
            break;
    }
}