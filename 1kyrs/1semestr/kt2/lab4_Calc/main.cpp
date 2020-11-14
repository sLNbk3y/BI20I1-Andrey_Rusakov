#include <iostream>
#include <cmath>
#include <Windows.h>
double getNumber(){
    std::cout << "¬ведите число" << std::endl;
    double number;
    std::cin >> number;
    while(std::cin.fail()){
        std::cout << "¬ведите правильное число" << std::endl;
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cin >> number;
    }
    std::cin.ignore(32767, '\n');
    return number;
}

char getOperand(){
char operand;
while(true){
        std::cout << "¬ведите операцию" << std::endl;
        std::cin >> operand;
        if (operand == '+' || operand == '-' || operand == '*' || operand == '/' || operand == '^' || operand == '!'){
        return operand;
    }
    std::cout << "¬ведите правильный знак операции" << std::endl;
}
return operand;
}
double factorial(double num){
    double result = num;
    if(num == 0){
        return 1;
    }
    return num * factorial(num-1);
    }

double calc(double num2, char op, double num1){
    setlocale(LC_ALL, "Russia");
    if (op == '+'){
        return num1 + num2;
    }
     if (op == '-'){
        return num1 - num2;
    }
     if (op == '*'){
        return num1 * num2;
    }
     if (op == '/'){
        return num1 / num2;
    }
     if (op == '^'){
        return pow(num1, num2);
    }
    if (op == '!'){
        return factorial(num1);
    }
}
int main(){
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);
   double result = calc(getNumber(), getOperand(), getNumber());
   std::cout << "ќтвет:" << std::endl << result;
   return 0;
}



