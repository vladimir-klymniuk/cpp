// Пользователь вводит прибыль фирмы за год (12 месяцев). 
// Необходимо определить месяц, в котором прибыль была максимальна и месяц, в котором  прибыль была минимальна.

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int min, max, latest;
    string minMonth, maxMonth;
    string calendar[12];
    min = 0;
    max = 0;

    calendar[0] = "January";
    calendar[1] = "February";
    calendar[2] = "March";
    calendar[3] = "April";
    calendar[4] = "May";
    calendar[5] = "June";
    calendar[6] = "Jule";
    calendar[7] = "August";
    calendar[8] = "September";
    calendar[9] = "October";
    calendar[10] = "November";
    calendar[11] = "December";

    cout << "Пользователь вводит прибыль фирмы за год (12 месяцев)." << endl;
    cout << "Необходимо определить месяц, котором прибыль была максимальна и месяц, в котором прибыль была минимальна."  << endl;


    for (int i = 11; i >= 0; i-- ) {
        int latest = 0;
        cout << "Please enter the amount for month: " << calendar[i] << endl;
        cin >> latest;

        if (0 == max) {
            max = latest;
        }

        if (0 == min) {
            min = latest;
        }


        if (latest > max) {
            max = latest;
            maxMonth = calendar[i];
        }

        if (min > latest) {
            min = latest;
            minMonth = calendar[i];
        }
    }

    cout << "Vаксимальна прибыль была " << max << " в месяц"<< maxMonth << endl;
    cout << "Минимальная прибыль была " << min << " в месяц" << minMonth << endl;

    return 0;
}