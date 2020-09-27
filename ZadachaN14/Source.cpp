#include <iostream>
#include <cmath>
int main() {
    using namespace std;
    setlocale(LC_ALL, "Russian");
    double m, A, k; // масса, угол в градусах, коэф. трени€ соответственно
    const double g = 9.81; // ускорение свободного падени€
    double deg = asin(1.0) / 90; // пересчЄт градусов в радиан
    cout << "¬ведите массу(кг)= "; cin >> m;
    cout << "¬ведите величину угла альфа(градусов)= "; cin >> A;
    cout << "¬ведите коэф. трени€= "; cin >> k;
    (sin(A * deg) < k * cos(A * deg)) ? cout << "Fтр = " << ("0 H") : cout << "Fтр = " << (k * m * g * cos(A * deg)) << ("H");
    cout << endl;
    return 0;
}
