#include <iostream>
#include <cmath>
using namespace std;
int main(){
    setlocale(LC_ALL,"RUS");
    double m, A, k; // масса,угол в градусах, коэф. трения соответственно
    const double g = 9.81; // ускорение свободного падения
    double deg = asin(1.0)/90; // пересчёт градусов в радиан
    cout<<"Введите массу(кг)= ";
    cin>>m;
    cout<<"Введите величину угла альфа(градусов)= ";
    cin>>A;
    cout<<"Введите коэф. трения= ";
    cin>>k;                
    (sin(A*deg) < k*cos(A*deg)) ? cout<<"Fтр = "<<("0 H") : cout<<"Fтр = "<<(k*m*g*cos(A*deg))<<("H");
    cout<<endl;                
}            

