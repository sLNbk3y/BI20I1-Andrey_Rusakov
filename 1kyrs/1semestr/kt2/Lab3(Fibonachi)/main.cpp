#include <iostream>
using namespace std;
unsigned long long fibonacci(unsigned long number)
{
    if (number == 0)
        return 0;
    if (number == 1)
        return 1;
    return fibonacci(number - 1) + fibonacci(number - 2);
}

int main()
{
    for (int count = 0; count < 50; ++count)
    cout << fibonacci(count) << " ";

    return 0;
}
