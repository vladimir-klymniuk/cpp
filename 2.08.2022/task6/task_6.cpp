#include <iostream>

using namespace std;

class NaturalDTO {
    public:
        int lenght;
};

NaturalDTO extractNaturalDigits(int arrSet[], int arrSize) {
    int counter = 0;
    NaturalDTO dto;
    cout << "arr size:" << arrSize << endl;

    for (int i = 0; i < arrSize; i++) {
        if (arrSet[i] == 2) {
            counter++;
        } else if (arrSet[i] % 2 != 0) {
            counter++;
        }
    }

    cout << "counter size:" << counter << endl;
    dto.lenght = counter;

    return dto;
}

int main() {
    setlocale(LC_ALL, "rus");
    cout << "Написать функцию, возвращающую количество простых чисел в передаваемом  ей массиве." <<endl;
    cout << "{ 1, 3, 5 ,7 , 10, 20, 30, 40, -10, -20, -30, -40 }" << endl;

    int arrSet[] = { 1, 3, 5 , 7, 10, 20, 30, 40, -10, -20, -30, -40 };
    int arrSize = sizeof(arrSet) / sizeof(arrSet[0]);
    NaturalDTO dto = extractNaturalDigits(arrSet, arrSize);
    cout << "Count of natural/simple digits are: " << dto.lenght << endl;

    return 0;
}