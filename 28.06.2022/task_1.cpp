// Найти факториала числа при помощи цикла for, while, do while. 
// 5! = 1*1*2*3*4*5
#include <iostream>

using namespace std;

int main() {
    int number, total, starter;
    total = 1;
    starter = 1;
    cout << "To calculate factorial, please, enter the digit number:" << endl;
    cin >> number;

    for (int i = starter; i <= number; i++) {
        total *= i;
    }

    cout << "Factorial using `for` is: " << total << endl;
    total = 1;

    while (starter <= number) {
        total *= starter;
        starter++;
    }

    cout << "Factorial using `while` is: " << total << endl;
    total = 1;
    starter = 1;

    do {
        total *= starter;
        starter++;
    } while (starter <= number);

    cout << "Factorial using `do while` is: " << total << endl;

    return 0;
}