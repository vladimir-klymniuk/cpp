#include <iostream>

using namespace std;

bool isPositive (int a) {
    return a > 0;
}

int main() {
    setlocale(LC_ALL, "rus");
    cout << "Написать функцию, которая возвращает истину, если передаваемое значение положительное и ложь, если отрицательное." << endl;
    cout << "Is 5 postive? - " << isPositive(4) << endl;
    cout << "Is -5 postive? - " << isPositive(-4) << endl;

    return 0;
}