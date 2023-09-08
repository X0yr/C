#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Введите количество ящиков с яблоками на складе" << endl;
    cin >> x;
    int i;
    while(x > 0){
        cout << "Сколько ящиков погрузить в машину?" <<endl;
        cin >> i;
        if(i>x){
            cout << "Недостаточное количество ящиков" << endl;
            break;
        }
        x = x-i;
        i = 0;
    }
    if(x = 0){
        cout << "Ящиков больше не осталось" << endl;
    }
}
