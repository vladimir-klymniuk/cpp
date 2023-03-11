// Вывести на экран пустой прямоугольник с заданными размерами заданным символом.
#include <iostream>

using namespace std;

const string FILLER = "X";

int main() {
    int x, y;
    string filler = " ";

    cout << "To draw the rectangle fill the side properties values" << endl;
    cout << "X:" << endl;
    cin >> x;

    cout << "Y:" << endl;
    cin >> y;

    cout << "Please, chose rectangle filler symbol, or leave whitespace to draw empty figure." << endl;
    cin >> filler;

    if (x == y) {
        cout << "If side are equal it gonna be a square." << endl;
    }

    cout << " ";
    for (int i = 0; i < x; i++) {
        cout << "-";
    }
    cout  << endl;

    for (int j = 0; j < y; j++) {
        cout << "|";
        for (int i = 0; i < x; i++) {
            cout << filler;
        }
        cout << "|" << endl;
    }

    cout << " ";
    for (int i = 0; i < x; i++) {
        cout << "-";
    }

    cout  << endl;

    return 0;
}