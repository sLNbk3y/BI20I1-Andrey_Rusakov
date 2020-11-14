#include <iostream>
using namespace std;
/*
//Задача 1.

void func(int* a) {
	*a = *a * 2;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 0;
	cout << "Введите число" << endl;
	cin >> a;
	func(&a);
	cout << "Ваш ответ: " << a << endl;
	return 0;
}


//Задача 2.

void func(int* a, int* b, int* c) {
	*a = *a * 2;
	*b = *b + 10;
	*c = *a + *b;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "Введите 2 числа" << endl;
	cin >> a;
	cin >> b;
	func(&a, &b, &c);
	cout << "Первый ответ:" << a << endl;
	cout << "Второй ответ:" << b << endl;
	cout << "Конечный ответ:" << c << endl;
	return 0;
}


//Задача 3.
*/

int main() {
	setlocale(LC_ALL, "Russian");
	int a[10] = { 15, 25 ,80 ,70 ,60, 35, 10, 5, 93, 107 };
	bool flag;
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	for (int i = 0; i < 10; i++) {
		bool flag = true;
		for (int j = 0; j < 9; j++) {
			if (a[j] > a[j + 1]) {
				int trade = a[j];
				a[j] = a[j + 1];
				a[j + 1] = trade;
				flag = false;
			    }
			}
		cout << " " << endl;
		for (int i = 0; i < 10; i++) {
			cout << a[i] << " ";
		}
		if (flag) {
			cout <<" "<< endl << "Массив не нуждается в сортировке" << endl;
			break;
		}
	}
    return 0;
}
	