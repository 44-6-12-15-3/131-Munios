#include <iostream>

int main() 
{
    double num1, num2;
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    double arev = (num1 + num2) / 2;
    std::cout << "Среднее арифметическое: " << arev << std::endl;
    char operation;
    std::cout << "Введите знак операции (+, -, *, /): ";
    std::cin >> operation;
    std::cout << "\nРезультат:" << std::endl;
    double result;
    /*
    if (operation == '+') {
        result = num1 + num2;
        std::cout << num1 << " + " << num2 << " = " << result << std::endl;
    }
    else if (operation == '-') {
        result = num1 - num2;
        std::cout << num1 << " - " << num2 << " = " << result << std::endl;
    }
    else if (operation == '*') {
        result = num1 * num2;
        std::cout << num1 << " * " << num2 << " = " << result << std::endl;
    }
    else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            std::cout << num1 << " / " << num2 << " = " << result << std::endl;
        } else {
            std::cout << "Ошибка: деление на ноль!" << std::endl;
        }
    }
    else {
        std::cout << "Ошибка: неверная операция!" << std::endl;
    }
    */
    
    std::cout << "\nРезультат:" << std::endl;
    
    switch (operation) {
        case '+':
            result = num1 + num2;
            std::cout << num1 << " + " << num2 << " = " << result << std::endl;
            break;
            
        case '-':
            result = num1 - num2;
            std::cout << num1 << " - " << num2 << " = " << result << std::endl;
            break;
            
        case '*':
            result = num1 * num2;
            std::cout << num1 << " * " << num2 << " = " << result << std::endl;
            break;
            
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << num1 << " / " << num2 << " = " << result << std::endl;
            } else {
                std::cout << "Ошибка: деление на ноль!" << std::endl;
            }
            break;
            
        default:
            std::cout << "Ошибка: неверная операция!" << std::endl;
            break;
    }
    
    return 0;
}