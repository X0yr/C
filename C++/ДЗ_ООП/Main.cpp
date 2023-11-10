#include "Check.cpp"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Введите количество товаров: "; 
    int len_tovar; 
    cin >> len_tovar;
    cout << "\n";
    Check *store_tovar = new Check[len_tovar];
    
    for (int i = 0; i < len_tovar; i++) {
        string name; 
        double price; 
        double weight; 
        int count_tovar;
        cout << "Название товара: "; cin >> name;
        cout << "Цена товара (Р): "; cin >> price;
        cout << "Вес товара (кг): "; cin >> weight;
        cout << "Количество купленного товара: "; cin >> count_tovar;
        store_tovar[i].setName(name);
        store_tovar[i].setPrice(price);
        store_tovar[i].setWeight(weight);
        store_tovar[i].setCount_Tovar(count_tovar);
        cout << "\n\n";
    }

    cout << "Название товара   " << "Цена товара   " << "Вес товара (кг)   " 
    << "Количество купл.   " << "Сумма покупки   " << "Общий вес" << endl;
    for (int j = 0; j < len_tovar; j++) {
        store_tovar[j].printAllInfo();
    }

}