// С помощью цикла for разработать программу, 
// которая будет вычислять сумму чисел нацело делящихся на 5. 
// Цикл задать от 1 до введенного с клавиатуры числа.
#include <iostream>

using namespace std;

int const DIVIDER = 5;

int main() {
    int limit;
    float total;

    cout << "Please enter the limit" << endl;
    cin >> limit;

    for (int i = 1; i < limit; i++) {
        if (i % DIVIDER == 0) {
            cout << i << endl;
            total = total + i;
        }
    }

    cout << "Total due the task condition is " << total << endl;

    return 0;
}