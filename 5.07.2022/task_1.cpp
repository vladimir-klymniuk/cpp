// Написать игру «Угадай число». 
// Программа загадывает число в диапазоне от 1 до 500. 
// Пользователь пытается его угадать. 
// После каждой попытки программа выдает подсказки, больше или меньше его число загаданного. 
// В конце программа выдает статистику: за сколько попыток угадано число, сколько времени это заняло. 
// Предусмотреть выход по 0, в случае, если пользователю надоело угадывать число.
#include <iostream>

using namespace std;

const int MAX_NUMBER = 500;
const int GAME_BREAKER = 0;

int main() {
    int findnumber, inputNumber, startTime;
    findnumber = 0;
    inputNumber = 0;
    startTime = 0;

    cout << "Try to guess the number from one to " << MAX_NUMBER << endl;
    // srand(time(NULL));                               // Reset internal function cursor 
    // findnumber = rand() % (MAX_NUMBER - 1 + 1) + 1;  // MAX_NUMBER - Min + Min | wtf =)
    srand(time(NULL));                                  // Reset internal function  
    findnumber = rand() % (MAX_NUMBER  + 1);            // MAX + 1
    startTime = time(NULL);

    do {
        cout << "Please, enter the number:" << endl;
        cin >> inputNumber;

        if (GAME_BREAKER == inputNumber) {
            cout << "You stop the game." << endl;
            break;
        }

        if (MAX_NUMBER < inputNumber) {
            cout << "Max input number must not be lower than -" << MAX_NUMBER << endl;
            continue;
        }

        if (findnumber == inputNumber) {
            cout << "Congratulate, you write a correct number." << endl;
            break;
        }

        if (findnumber > inputNumber) {
            cout << "Try greater number" << endl;
            continue;
        }

        if (findnumber < inputNumber) {
            cout << "Try lower number" << endl;
        }
    } while (true);

    cout << "Execute time is:" << time(NULL) - startTime << endl;

    return 0;
}