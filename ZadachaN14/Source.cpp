#include <iostream>
#include <cmath>
int main() {
    using namespace std;
    setlocale(LC_ALL, "Russian");
    double m, A, k; // �����, ���� � ��������, ����. ������ ��������������
    const double g = 9.81; // ��������� ���������� �������
    double deg = asin(1.0) / 90; // �������� �������� � ������
    cout << "������� �����(��)= "; cin >> m;
    cout << "������� �������� ���� �����(��������)= "; cin >> A;
    cout << "������� ����. ������= "; cin >> k;
    (sin(A * deg) < k * cos(A * deg)) ? cout << "F�� = " << ("0 H") : cout << "F�� = " << (k * m * g * cos(A * deg)) << ("H");
    cout << endl;
    return 0;
}
