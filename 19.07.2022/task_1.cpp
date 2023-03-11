// Написать, программу, которая вычисляет прибыль фирмы за 6 месяцев. 
// Пользователь вводит прибыль фирмы за каждый месяц.

#include <iostream>

using namespace std;

const int MONTHES = 6;

int main() {
    int total = 0;
    int amount = 0;
    string calendar[MONTHES];
    calendar[0] = "January";
    calendar[1] = "February";
    calendar[2] = "March";
    calendar[3] = "April";
    calendar[4] = "May";
    calendar[5] = "June";
    cout << "To calculate total firm profit, please fill the amount for each month." << endl;

    for (int i = 0; i < MONTHES; i++) {
        amount = 0;
        cout << "Please, enter the money amount for " << calendar[i] << " month." << endl;
        cin >> amount;
        total += amount;
    }

    cout << "Total is:" << total << endl;
}