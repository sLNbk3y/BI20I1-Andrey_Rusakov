#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void InsertSort(int a[], const int size)
{
    int i, j, k, tmp;   
    for (i = 0; i < size - 1; i++)
    {
        k = i + 1;
        tmp = a[k];
        for (j = i + 1; j > 0; j--)
        {
            if (tmp < a[j - 1])
            {
                a[j] = a[j - 1];
                k = j - 1;
            }
            a[k] = tmp;
        }
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int size;
    cout << "Введите размер массива" << endl;
    cin >> size;
    cout << "<<" << endl;
    int* a = new int[size];
    cout << "Неотсортированный массив" << endl;
    for (int i = 0; i < size; i++) {
        a[i] = rand() % 101;
        cout << a[i] << " ";
    }
    cout << endl << "<<" << endl;
    InsertSort(a, size);
    cout << "Отсортированный массив" << endl;
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl << "<<" << endl;
    delete[] a;
    system("pause");
    return 0;
}