#include "static_function.h"
#include <iostream>

using namespace std;

namespace MyFunctions {
    void functionWithStatic(int number) {
        static int staticVar = 0;

        cout << "Число: " << number 
             << ", Статическая переменная: " << staticVar 
             << ", Сумма: " << (number + staticVar) 
             << endl;

        staticVar = number;
    }
}
