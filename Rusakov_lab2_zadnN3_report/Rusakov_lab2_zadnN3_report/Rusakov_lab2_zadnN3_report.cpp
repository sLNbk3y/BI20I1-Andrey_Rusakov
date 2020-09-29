#include <iostream>
#include <string>
#include <cmath>

int main() {
	setlocale(LC_ALL, "Russian");
	std::string S = "";
	new int[S.length()];
	int numb = 0;
	int output = 0;
	bool flag = false;
	std::cout << "Перевод чисел из двоичной СС в десятичную СС" << std::endl << "<<" << std::endl;
	std::cout << "Введите число в двоичной СС" << std::endl << "<<"<< std::endl;
	std::cin >> S;
	for (int i = 0; i <= S.length() - 1; i++) {
		if (S[i] != '0' && S[i] != '1') {
			flag = true;
			break;
		}
		else continue;
	}
	for (int i = S.length() - 1; i >= 0; i--) {
		if (S[i] == '0') {}
		else if (S[i] == '1') { output = output + (pow(2, numb)); };
			numb++;
		}
	if (flag == true) { std::cout << "Введите двоичное число!" << std::endl; }
	else std::cout << "Ответ: " << output << std::endl;
	return 0;
}
