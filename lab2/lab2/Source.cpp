#include <iostream>
#include <cstdlib>
#include <ctime>

/*
 //������ 1.

int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;
	int UInput, zer, numb, i_2, i_8;
	UInput = zer = numb = i_2 = i_8 = 0;
	cout << "������� �����" << endl;
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
	cout << "����� ������� 2 = " << numb << endl;
	cout << "����� ������� 2 = " << i_2 << endl;
	cout << "����� ������� 8 = " << i_8 << endl;
}

//������ 2.

int main()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");
	int r_val = 0;
	int UserInput = 0;
	char answr = 0;
	srand(time(NULL));
	
	do {
		cout << "������� �����: ���� �������� ����� ����� � ��������� �� 1 �� 100. ���� ������������ ���� �� �� ��������, �����!" << endl;
		cout << "������� �����" << endl;
		r_val = (rand() % 100) + 1;
		do {
			cin >> UserInput;
			if (1 <= UserInput <= 100) {
				if (UserInput > r_val)  cout << "�������� ��� ���, �� ��c�� ������." << endl;
				else if (UserInput < r_val)  cout << "�������� ��� ���, �� ��c�� ������." << endl;
			}
				else cout << "������� ����� �� 1 �� 100" << endl;			
		} while (UserInput != r_val); cout << "���������, �������� ������! ���� �������� " << r_val << endl;
		cout << "��� ������? (Yes/No)" << endl;
		cin >> answr;
	} while (strchr("Nn", answr) == nullptr);
	return 0;
}
*/

//������ 3.

int main() {
	using namespace std;
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	char answer = 0;
	int bet = 0;
	int r_val = 0;
	int N = 0;
	do {
		cout << "������." << endl; 
		cout << "������� �����: ���� �������� ����� �� 0 �� 21. �� ���� ������� 1000. ���� ��� �� ��� ��� ���� �� ���� ����� �� ��������� 0, ��� ���� �� �� ��������� ����� �� �� �� 3000." << endl;
		cout << "���� �� ��� ���������� �����, �� ���� ������ ������������� � 4 ����, ���� ���� ����� �������� � �������� +-2, �� ������ �����������." << endl;
		cout << "�����" << endl;
		int bank = 1000;
		
		do {
			r_val = rand() % 22;
			cout << r_val << endl;
			cout << "���� ������: "; cin >> bet;
			cout << "���� �����: "; cin >> N;
			if (N == r_val) { bet = bet * 4; bank = bank + bet; cout << "�� ��������! ������ ��� ������ ����������: " << bank << endl; }
			else if ((N >= (r_val - 2)) && (N <= (r_val + 2))) { bet = bet * 2; bank = bank + bet; cout << "�� ��������! ������ ��� ������ ����������: " << bank << endl; }
			else if ((N != r_val) && (N != (r_val - 2)) && (N != (r_val + 2))) { bank = bank - bet; cout << "�� ���������. ������ ��� ������ ����������: " << bank << endl; };
		} while ((bank != 0) && (bank <= 3000)); 
			cout << "��� ������? (Yes/No)" << endl;
			cin >> answer;
	} while (strchr("Nn", answer) == nullptr);
	return 0;
 }