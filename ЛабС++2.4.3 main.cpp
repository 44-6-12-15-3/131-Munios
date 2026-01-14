#include <iostream>
#include "static_function.h"

#define SUM_MACRO(a, b) ((a) + (b))

using namespace std;
using namespace MyFunctions;

int main() {
    cout << "=== Демонстрация работы функции со статической переменной ===\n" << endl;
    
    cout << "1. Первый вызов функции:" << endl;
    functionWithStatic(5);
    
    cout << "\n2. Второй вызов функции:" << endl;
    functionWithStatic(10);
    
    cout << "\n3. Третий вызов функции:" << endl;
    functionWithStatic(15);
    
    cout << "\n4. Четвертый вызов функции:" << endl;
    functionWithStatic(3);
    
    cout << "\n5. Пятый вызов функции:" << endl;
    functionWithStatic(7);
    
    cout << "\n=== Анализ результата ===" << endl;
    cout << "Статическая переменная сохраняет свое значение между вызовами функции." << endl;
    cout << "При первом вызове она инициализируется значением 0." << endl;
    cout << "Каждый следующий вызов использует значение из предыдущего вызова." << endl;
    
    cout << "\n=== Тестирование макроса SUM_MACRO ===" << endl;
  
    int x = 20, y = 15;
    cout << "Целые числа: x = " << x << ", y = " << y << endl;
    cout << "SUM_MACRO(x, y) = " << SUM_MACRO(x, y) << endl;
    

    double a = 3.14, b = 2.71;
    cout << "\nДробные числа: a = " << a << ", b = " << b << endl;
    cout << "SUM_MACRO(a, b) = " << SUM_MACRO(a, b) << endl;
    
    cout << "\nС выражением: SUM_MACRO(5*2, 3+4) = " << SUM_MACRO(5*2, 3+4) << endl;
    
    cout << "\n=== Особенность макросов ===" << endl;
    int i = 5, j = 3;
    cout << "До: i = " << i << ", j = " << j << endl;
    int result = SUM_MACRO(i++, j++);
    cout << "После SUM_MACRO(i++, j++):" << endl;
    cout << "result = " << result << endl;
    cout << "i = " << i << ", j = " << j << endl;
    cout << "Примечание: из-за двойного увеличения результат неожиданный!" << endl;
    
    cout << "\n=== Дополнительные вызовы функции ===" << endl;
    cout << "\n6. Шестой вызов функции:" << endl;
    functionWithStatic(-8);
    
    cout << "\n7. Седьмой вызов функции:" << endl;
    functionWithStatic(0);
    
    cout << "\n8. Восьмой вызов функции:" << endl;
    functionWithStatic(100);
    
    return 0;
}
