#include <iostream>

using namespace std;
#include <ctime>
//ДЗ


// int main()
// {
//     int a, b;
//     cout<<"Введите длину"<<endl;
//     cin >> a;
//     cout<<"Введите ширину"<<endl;
//     cin >> b;
//     cout<<"Перимитр прямоугольника равен "<<2*a+2*b<<endl;
//     cout<<"Площадь прямоугольника равен "<<a*b<<endl;

//     return 0;
// }



// int main(){
//     int a,b,c;
//     cin >>a>>b>>c;
//     if(a<b && b<c){
//         cout<<a<<b<<c;
//     }
//     if(a<c && c<b){
//         cout<<a<<c<<b;
//     }
//     if(b<a && a<c){
//         cout<<b<<a<<c;
//     }
//     if(b<c && c<a){
//         cout<<b<<c<<a;
//     }
//     if(c<b && b<a){
//         cout<<c<<b<<a;
//     }
//     if(c<a && a<b){
//         cout<<c<<a<<b;
//     }
// }



// int main(){
//     int a, b;
//     cin>>a>>b;
//     for(int i = a; i<b; i++){
//         if(i%3 == 0 && i%5 != 0){
//             cout<<i<<endl;
//         }
//     }
// }


//Функции
// long double factor(int a){
//     if(a<0){
//         return 0;
//         }
    
//     else if(a==0){
//         return 1;
//     }
//     else{
//         return a*factor(a-1);
//     }
// }



// int main(){
//     int n;
//     cin>>n;
//     cout<<factor(n)<<endl;
//     return 0;
// }

// 2

// const int size = 5;

// int zapol_mass(int k[][size],const int size){
//     srand(time(NULL));
//     for(int i = 0; i<5; i++){
//         for(int j = 0; j<5; j++){
//             int test = 30+rand()%30;
//             k[i][j] = test;
//             cout<<k[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int min(int k[][size], const int size){}


// int main(){
//     int mas1[size][size] = {};
//     cout<<zapol_mass(mas1, size)<<endl;
// }

