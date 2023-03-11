#include <iostream>

using namespace std;

void displayLowHighSetValues(int arr[], int arrSize) {
    int moreValue = 0;
    int moreValuePointer = 0;
    int lessValue = 0;
    int lessValuePointer = 0;

    for (int i = 0; i < arrSize; i++) {
        if (i == 0) {
            moreValue = arr[i];
            lessValue = arr[i];
            continue;
        }

        if (moreValue < arr[i]) {
            moreValue = arr[i];
            moreValuePointer = i;
        }

        if (lessValue > arr[i]) {
            lessValue = arr[i];
            lessValuePointer = i;
        }
    }

    cout << "\r\nResult is:" << endl;
    cout << "\t Less Value: " << lessValue << " Less Pointer: " << lessValuePointer << endl;
    cout << "\t More Value: " << moreValue << " More Pointer: " << moreValuePointer << endl;
}

int main() {
    setlocale(LC_ALL, "rus");
    cout << "Написать функцию, определяющую минимум и максимум (значение и номер) элементов передаваемого ей массива." << endl;
    cout << "Incoming set: { 10, 40, 50, 0, 15, -33, 40, 80 }";

    int set[] = { 10, 40, 50, 0, 15, -33, 40, 80 };
    int arrSize = sizeof(set) / sizeof(set[0]);
    displayLowHighSetValues(set, arrSize);

    return 0;
}