#include <iostream>

using namespace std;

int const SET_SIZE = 4;

int main() {
    setlocale(LC_ALL, "rus");
    int set[SET_SIZE];
    int initalValue;

    cout << "Напишите программу, которая создает двухмерный массив и заполняет его по следующему принципу: \r\n";
    cout << "\t пользователь вводит число (например, 3) первый элемент массива принимает значение этого числа, \r\n";
    cout << "\t последующий элемент массива принимает значение этого числа умноженного на 2 (т.е. 6 для нашего примера), \r\n";
    cout << "\t третий элемент массива предыдущий элемент умноженный на 2 (т.е. 6*2=12 для нашего примера). \r\n";
    cout << "Созданный массив вывести на экран. \r\n";
    cout << "Пользователь, введите число - " << endl;
    cin >> initalValue;

    cout << "SET[0]: " << initalValue << endl;
    set[0] = initalValue;

    for (int i = 1; i <= SET_SIZE; i++) {
        set[i] = set[i - 1] * 2;
        cout << "SET[" << i << "]: " <<  set[i] << endl;
    }

    return 0;
}