// Организовать беспрерывный ввод чисел с клавиатуры, пока пользователь не введёт 0. 

// После ввода нуля, показать на экран количество чисел, которые были введены, 
// их общую сумму и среднее арифметическое.

// Подсказка: необходимо объявить переменную-счетчик, 
// которая будет считать количество введенных чисел, и переменную, 
// которая будет накапливать общую сумму чисел.
#include <iostream>

using namespace std;

const int BREAKER = 0;

int main() {
    int input, counter, latest, total, avg;
    cout << "Please, enter the numbers. To break the input write 0" << endl;

    do {
        cin >> input;
        total += input;
        counter++;
    } while (input != 0);

    cout << "Count of entered numbers: " << counter << endl;
    cout << "Total amount is: " << total << endl;
    cout << "Avg are:" << total / counter << endl;

    return 0;
}