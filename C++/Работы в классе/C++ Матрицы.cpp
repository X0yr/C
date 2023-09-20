#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    srand(time(NULL));
    int u;
    int o;
    double p = 0;
    double y = 0;
    int strr = 0;
    int stol = 0;
    cin >> u;
    cin >> o;
    int stroc[u] = {};
    int stolb[o] = {};
    int mas[u][o] = {};
    for (int i=0; i<u; i++){
        for (int j=0; j<o; j++){
            int test = -15+rand()%35;
            mas[i][j] = test;
            cout << mas[i][j] << " ";
            y += mas[i][j];
        }
        cout << endl;
    }
    for (int i=0; i<u; i++){
        for (int j=0; j<o; j++){
            strr += mas[i][j];
            stol += mas[j][i];
        }
        stroc[i] = strr;
        stolb[i] = stol;
        strr = 0;
        stol = 0;
    }
    cout << endl;
    
    cout << "Вывод суммы всех строк" << endl;
    
    for (int i=0; i<u; i++){
        cout << stroc[i] << " ";
    }
    cout << endl;
    
    cout << "Вывод суммы всех столбцов" << endl;
    
    for (int i=0; i<o; i++){
        cout << stolb[i] << " ";
    }
    cout << endl;
    
    for (int i=0; i<u; i++){
        for (int j=0; j<o; j++){
            if (mas[i][j]%2 != 0){
                mas[i][j] = pow(mas[i][j], 2);
            }
            else{
                mas[i][j] = pow(mas[i][j], 5);
            }
        }
    }

    cout << "Изменённая матрица" << endl;

    for (int i=0; i<u; i++){
        for (int j=0; j<o; j++){
            cout << mas[i][j] << " ";
            p += mas[i][j];
        }
    cout << endl;
    }
    cout << endl;
    y = y/(u*o);
    p = p/(u*o);
    cout << "Среднее арифметическое по двум матрицам "<<y << " " << p<<endl;
    

}