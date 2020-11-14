#include <iostream>
#include <cstdlib>
#include <ctime>

/*
 //Задача 1.

int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;
	int UInput, zer, numb, i_2, i_8;
	UInput = zer = numb = i_2 = i_8 = 0;
	cout << "Введите число" << endl;
	cin >> UInput;
	while (UInput>=zer)
	{
		if (zer % 2 == 0) {
			cout << zer << endl;
			numb++;
			i_2 = i_2 + zer;
		}
		zer++;
	}
	zer = 0;
	while (UInput >= zer) {
		if (zer % 8 == 0) {
			cout << zer << endl;
			i_8 = i_8 + zer;
		}
		zer++;
	}
	cout << "Чисел кратных 2 = " << numb << endl;
	cout << "Сумма кратных 2 = " << i_2 << endl;
	cout << "Сумма кратных 8 = " << i_8 << endl;
}

//Задача 2.

int main()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");
	int r_val = 0;
	int UserInput = 0;
	char answr = 0;
	srand(time(NULL));
	
	do {
		cout << "Правила такие: тебе загадано целое число в диапазоне от 1 до 100. Игра продолжается пока ты не угадаешь, удачи!" << endl;
		cout << "Введите число" << endl;
		r_val = (rand() % 100) + 1;
		do {
			cin >> UserInput;
			if (1 <= UserInput <= 100) {
				if (UserInput > r_val)  cout << "Попробуй ещё раз, моё чиcло меньше." << endl;
				else if (UserInput < r_val)  cout << "Попробуй ещё раз, моё чиcло больше." << endl;
			}
				else cout << "Введите число от 1 до 100" << endl;			
		} while (UserInput != r_val); cout << "Правильно, отличная работа! Было загадано " << r_val << endl;
		cout << "Ещё партию? (Yes/No)" << endl;
		cin >> answr;
	} while (strchr("Nn", answr) == nullptr);
	return 0;
}
*/

//Задача 3.

int main() {
	using namespace std;
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	char answer = 0;
	int bet = 0;
	int r_val = 0;
	int N = 0;
	do {
		cout << "Казино." << endl; 
		cout << "Правила такие: тебе загадано число от 0 до 21. На твоём балансе 1000. Игра идёт до тех пор пока на твоём счету не останется 0, или пока ты не увеличишь сумму на нём до 3000." << endl;
		cout << "Если ты его угадываешь число, то твоя ставка увеличивается в 4 раза, если твой ответ попадает в интервал +-2, то ставка удваивается." << endl;
		cout << "Удачи" << endl;
		int bank = 1000;
		
		do {
			r_val = rand() % 22;
			cout << r_val << endl;
			cout << "Ваша ставка: "; cin >> bet;
			cout << "Ваше число: "; cin >> N;
			if (N == r_val) { bet = bet * 4; bank = bank + bet; cout << "Вы выйграли! Теперь выш баланс состовляет: " << bank << endl; }
			else if ((N >= (r_val - 2)) && (N <= (r_val + 2))) { bet = bet * 2; bank = bank + bet; cout << "Вы выйграли! Теперь выш баланс состовляет: " << bank << endl; }
			else if ((N != r_val) && (N != (r_val - 2)) && (N != (r_val + 2))) { bank = bank - bet; cout << "Вы проиграли. Теперь выш баланс состовляет: " << bank << endl; };
		} while ((bank != 0) && (bank <= 3000)); 
			cout << "Ещё партию? (Yes/No)" << endl;
			cin >> answer;
	} while (strchr("Nn", answer) == nullptr);
	return 0;
 }