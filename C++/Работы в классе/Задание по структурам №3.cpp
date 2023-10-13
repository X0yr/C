/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

Создать структуру "Маршрут" в которой есть следующие поля: 
1. пункт отправления
2. время отправления
3. вид транспорта
4. пункт прибытия
5. время прибытия
6. цена поездки

Написать прогу:
1. Пользователь вводит информацию о маршруташ в произвольном кол-ве
2. Вывести всю введённую инфо на экран в виде таблицы
3. Предложить пользователю ввести тип транспорта
4. Выдать информацию о тех маршрутак по которым ездит данный транспорт


*******************************************************************************/

#include <iostream>
#include <string.h>
#define M 15
using namespace std;

struct vrema{
    int mesac;
    int deni;
    int chas;
    int minut;
};

struct vrema2{
    int mesac1;
    int deni1;
    int chas1;
    int minut1;
};


struct Marshrut{
    char kuda[30];
    vrema vrema_otprav;
    char vid_transporta[M];
    char punct_prib[30];
    vrema2 vrema_prib;
    int chena;
};

void show(const Marshrut Obj[], int kol_vo){
    cout<<"Пункт отправления\t" << "Время отправления\t"<< "Вид транспорта\t"<<
    "Пункт прибытия\t"<<"Время прибытия\t"<<"Цена поездки\t"<<endl;
    for(int j = 0; j<kol_vo; j++){
        cout<<'\t'<<Obj[j].kuda<<'\t'<<'\t'<<"   "<<Obj[j].vrema_otprav.mesac<<"."<<Obj[j].vrema_otprav.deni<<
        " "<<Obj[j].vrema_otprav.chas<<":"<<Obj[j].vrema_otprav.minut<<'\t'<<'\t'<< Obj[j].vid_transporta<<'\t'<<
        '\t'<<Obj[j].punct_prib<<'\t'<<'\t'<<Obj[j].vrema_prib.mesac1<<"."<<Obj[j].vrema_prib.deni1<<" "
        <<Obj[j].vrema_prib.chas1<<":"<<Obj[j].vrema_prib.minut1<<'\t'<<"      "<<Obj[j].chena<<endl;
    }
}

    

int main()
{
    Marshrut Marshrute[100] = {};
    char userAnswer= '1';
    int i = 0;
    do{
        cout<<"Пункт отправления: ";
        
        cin.getline(Marshrute[i].kuda, 30);
        cout<<"Время отправления: ";
        cin>>Marshrute[i].vrema_otprav.mesac;
        cin>>Marshrute[i].vrema_otprav.deni;
        cin>>Marshrute[i].vrema_otprav.chas;
        cin>>Marshrute[i].vrema_otprav.minut;
        cout<<"Вид транспорта: ";
        cin.getline(Marshrute[i].vid_transporta, 15);
        cin.getline(Marshrute[i].vid_transporta, 15);
        cout<<"Пункт прибытия: ";
        cin.getline(Marshrute[i].punct_prib, 30);
        cout<<"Время прибытия: ";
        cin>>Marshrute[i].vrema_prib.mesac1;
        cin>>Marshrute[i].vrema_prib.deni1;
        cin>>Marshrute[i].vrema_prib.chas1;
        cin>>Marshrute[i].vrema_prib.minut1;
        cout<<"Цена поездки: ";
        cin>>Marshrute[i].chena;
        i++;
        cout<<"Продолжить? (1-Да; 0-Нет): ";
        cin>>userAnswer;
        cin.getline(Marshrute[i].kuda, 30);
    }
    while(userAnswer != '0');
    show(Marshrute, i);
    
    string vid;
    cout<<"Введите вид средства: ";
    cin>>vid;
    for(int j = 0; j<i; j++){
        if(Marshrute[j].vid_transporta == vid){
            cout<<'\t'<<Marshrute[j].kuda<<'\t'<<'\t'<<"   "<<Marshrute[j].vrema_otprav.mesac<<"."<<Marshrute[j].vrema_otprav.deni<<
        " "<<Marshrute[j].vrema_otprav.chas<<":"<<Marshrute[j].vrema_otprav.minut<<'\t'<<'\t'<< Marshrute[j].vid_transporta<<'\t'<<
        '\t'<<Marshrute[j].punct_prib<<'\t'<<'\t'<<Marshrute[j].vrema_prib.mesac1<<"."<<Marshrute[j].vrema_prib.deni1<<" "
        <<Marshrute[j].vrema_prib.chas1<<":"<<Marshrute[j].vrema_prib.minut1<<'\t'<<"      "<<Marshrute[j].chena<<endl;
        }
    }

    
}