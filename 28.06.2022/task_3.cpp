// Написать программу, которая находит среди неограниченной 
// последовательности положительных чисел, 
// введенных с клавиатуры, максимальное число.
#include <iostream>

using namespace std;

int main() {
    unsigned int latest, max;
    max = 0;

    cout << "To see what is the greates value,";
    cout << "please fill the digits inside:" << endl;

    do {
        cin >> latest;

        if (max < latest) {
            cout << "The highest value is - "  << latest << endl;
            max = latest;
        }

    } while(true);

    return 0;
}