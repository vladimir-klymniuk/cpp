#include <iostream>

using namespace std;

bool TIME_SHAKED = false;
unsigned int MAX_NUMBER = 50;

int generateRand() {

    if (TIME_SHAKED == false) {
        time(NULL);
        TIME_SHAKED = true;
    }

    return rand() % MAX_NUMBER;
}

int main() {
    setlocale(LC_ALL, "rus");

    cout << "Задание 2:\r\n";
    cout << "\t- Напишите программу, в которой объявляется массив размером 5х10 и массив размером 5х5.\r\n";
    cout << "\t- Первый массив заполняется случайными числами, в диапазоне от 0 до 50.\r\n";
    cout << "\t- Второй массив заполняется по следующему принципу: ";
        cout << "\t- первый элемент второго массива равен сумме первого и второго элемента первого массива,\r\n";
        cout << "\t- второй элемент второго массива равен сумму третьего и четвертого элемента первого массива." << endl;

    int setBB[5][5];
    int setB[5][10] = {
        {
            generateRand(), generateRand(), generateRand(), generateRand(), generateRand(),
            generateRand(), generateRand(), generateRand(), generateRand(), generateRand()
        },
        {
            generateRand(), generateRand(), generateRand(), generateRand(), generateRand(),
            generateRand(), generateRand(), generateRand(), generateRand(), generateRand()
        },
        {
            generateRand(), generateRand(), generateRand(), generateRand(), generateRand(),
            generateRand(), generateRand(), generateRand(), generateRand(), generateRand()
        },
        {
            generateRand(), generateRand(), generateRand(), generateRand(), generateRand(),
            generateRand(), generateRand(), generateRand(), generateRand(), generateRand()
        },
        {
            generateRand(), generateRand(), generateRand(), generateRand(), generateRand(),
            generateRand(), generateRand(), generateRand(), generateRand(), generateRand()
        },
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j+=2) {
            int iter = 0;
            if (j == 0) {
                iter = 1; 
            } else {
                iter = j - 1;
            }

            setBB[i][i] = setB[i][j] + setB[i][iter]; 
        }
    }

    return 0;
}