#include <iostream>

using namespace std;

int factorial(int number) {                  // 3  2  1
    if (number == 1) {                         //  1
        return number;
    }

    return number * factorial(number - 1);   // 3 * 2 * 1
}

int main() {
    int number;
    setlocale(LC_ALL, "rus");
    cout << "Написать функцию, вычисляющую факториал переданного ей числа." << endl;
    cout << "Enter the number";
    cin >> number;
    cout << endl;
    cout << "Factorial of - " << number << " = " << factorial(number) << endl;

    return 0;
}