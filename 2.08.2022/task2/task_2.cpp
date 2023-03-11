#include <iostream>

using namespace std;

int returnMax(int a, int b) {
    return a > b ? a : b;
}

int main() {
    setlocale(LC_ALL, "rus");
    cout << "Написать функцию для нахождения наибольшего из двух чисел." << endl;
    cout << "What is greater a or b? When a = 10 and b 33;\t Answer is: " << returnMax(10, 33) << endl; 

    return 0;
}