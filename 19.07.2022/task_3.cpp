// Пользователь вводит длину сторон пятиугольника, 
// каждая сторона заноситься в массив, 
// необходимо вычислить периметр пятиугольника (периметр — сумма всех сторон).

#include <iostream>

using namespace std;

int const FIVE = 5;

int main() {
    int sides[FIVE];
    int lenght = 0;

    for (int i = 1; i <= FIVE; i++) {
        cout << "Please, enter the side *" << i <<  "* size:" << endl;
        cin >> sides[i];
        lenght += sides[i];
    }

    cout << "Length is: " << lenght << endl;

    return 0;
}