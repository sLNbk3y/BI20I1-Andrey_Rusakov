#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <Windows.h>

using namespace std;

string uInput;
vector <int> Num;
vector<int> a;
vector<int> b;
vector<int> result;

void getNumber();
int checkStr();
void sum();
void subtraction();
void showResult();
int trans(char element);


 int trans(char element) {
	     if (element == '0')
		return 0;
	else if (element == '1')
		return 1;
	else if (element == '2')
		return 2;
	else if (element == '3')
		return 3;
	else if (element == '4')
		return 4;
	else if (element == '5')
		return 5;
	else if (element == '6')
		return 6;
	else if (element == '7')
		return 7;
	else if (element == '8')
		return 8;
	else if (element == '9')
		return 9;
    else
		return 10;
}

int checkStr(){
    int counter = 0;
    for (int i = 0; i < uInput.length(); i++) {
		if (uInput[i] != '+' && uInput[i] != '-' && uInput[i] != '*' && uInput[i] != '/' && uInput[i] != '^' && uInput[i] != ' ') {
			if (trans(uInput[i]) == 10)
				counter++;
		}
	}
	if (counter > 0)
		return true;
	else
		return false;
}


void getNumber() {
    int flag = 0;

	for (int i = 0; i < uInput.length(); i++) {
		if (uInput[i] != '+' && uInput[i] != '-' && uInput[i] != '*' && uInput[i] != '/' && uInput[i] != '^' && uInput[i] != ' ') {
			if (flag == 0)
				a.push_back(trans(uInput[i]));
			else
				b.push_back(trans(uInput[i]));
		}
		if (uInput[i] == '+' || uInput[i] == '-' || uInput[i] == '*' || uInput[i] == '/' || uInput[i] == '^')
			flag++;
	}
}
/*
void sum() {
	int flag = 0;

	if (num1.size() > num2.size()) {
		for (int i = num1.size() - num2.size(); i > 0; i--) {
			num2.insert(num2.begin(), 0);
		}
	}
	else if (num2.size() > num1.size()) {
		for (int i = num2.size() - num1.size(); i > 0; i--) {
			num1.insert(num1.begin(), 0);
		}
	}

	for (int i = num1.size() - 1; i >= 0; i--) {
		result.insert(result.begin(), (num1[i] + num2[i] + flag) % 10);

		if (i == 0 && num1[i] + num2[i] + flag > 9)
			result.insert(result.begin(), 1);

		if ((num1[i] + num2[i] + flag) > 9)
			flag = 1;
		else
			flag = 0;
	}
}
*/
void subtraction() {
	int flag = 0;

	if (a.size() > b.size()) {
		for (int i = a.size() - b.size(); i > 0; i--) {
			b.insert(b.begin(), 0);
		}
	}
	else if (b.size() > a.size()) {
		for (int i = b.size() - a.size(); i > 0; i--) {
			a.insert(a.begin(), 0);
		}
	}

	for (int i = a.size() - 1; i >= 0; i--) {
		if (a[i] < b[i]) {
			result.insert(result.begin(), (a[i] + 10) - b[i]);
			int j = i;
			while (j > 0) {
				if (a[j - 1] != 0) {
					a[j - 1] = a[j - 1] - 1;
					break;
				}
				else
					j--;
			}
		}
		else {
			result.insert(result.begin(), a[i] - b[i]);
		}
	}
}

void showResult() {
	for (int i = 0; i < result.size(); i++)
		cout << result[i];
}



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    do {
		cout << "¬ведите число." << endl;
		getline(cin, uInput);
		if (checkStr()){
			system("cls");
			cout << "¬ведите число правильно." << endl;
			system("pause");
		}
		system("cls");
	} while (checkStr());
	void getNumber();
	subtraction();
	//sum();
	//showResult();

	cout << endl;
	for (int i = 0; i < a.size(); i++) {
		cout << a[i];
	}
	cout << endl;
	for (int i = 0; i < b.size(); i++) {
		cout << b[i];
	}

	system("pause");
	return 0;
}
