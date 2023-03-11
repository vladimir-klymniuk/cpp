#include <iostream>

using namespace std;

void displayReverse(int arrSet[], int arrSize) {
    cout << " \"{ ";

    for (int i = arrSize -1; i >= 0; i--) {
        // cout << "Key: " << i << endl;
        cout << arrSet[i];

        if (i != 0) {
            cout << ", ";
        }
    }

    cout << " }\" " << endl;
}

int main() {
    setlocale(LC_ALL, "rus");
    cout << "Написать функцию, меняющую порядок следования элементов передаваемого ей массива на противоположный." << endl;
    cout << "{ 10, 20, 30, 40, -10, -20, -30, -40 }" << endl;
    int arrSet[] = { 10, 20, 30, 40, -10, -20, -30, -40 };
    int arrSize = sizeof(arrSet) / sizeof(arrSet[0]);
    displayReverse(arrSet, arrSize);

    return 0;
}