// Написать программу проверки знания таблицы умножения. 
// Программа должна вывести 10 примеров и выставить оценку: за 10 правильных ответов — "отлично",
// за 9 и 8 — "хорошо", за 7 и 6 — "удовлетворительно", за 6 и менее — "неудовлетворительно".
// Ниже приведен рекомендуемый вид экрана программы.
//
//  *** Проверка знания талицы умножения ***
//  После примера введите ответ и нажмите <Enter>
//      5 x 1 = 15
//      7 x 7 = 49
//      1 x 4 = 4
//      4 x 3 = 12
//      9 x 4 = 36
//      8 x 8 = 64
//      7 x 8 = 52
//  Вы ошиблись! 7 x 8 = 56 
//      4 x 7 = 28
//      3 x 5 = 15
//      2 x 5 = 100
//  Правильных ответов: 9
//  Оценка: Хорошо.
// Ответы пользователя выделены полужирным.
#include <iostream>

using namespace std;

const int FROM = 1;
const int TO = 10;
const int FARVATOR = 3;

int main() {
    int counterCorrect, counterWrong, input, randMultiplier, randNumber, multiplyResult = 0;
    string results[3];

    results[0] = "BAD";
    results[1] = "GOOD";
    results[2] = "WELL DONE";

    cout << "*** Проверка знания талицы умножения ***" << endl;
    cout << "После примера введите ответ и нажмите <Enter>" << endl;
    srand(time(NULL));

    for (int i = 0; i < TO; i++) {
        randMultiplier = rand() % (TO + 1);
        randNumber = rand() % (TO + 1);
        multiplyResult = randMultiplier * randNumber;

        cout << randMultiplier << " x " << randNumber << " = ";
        cin >> input;

        if (multiplyResult == input) {
            counterCorrect++;
            continue;
        }

        cout << "Вы ошиблись!" << randMultiplier << " x " << randNumber << " = " << multiplyResult << endl;
        counterWrong++;
    }

    if (TO == counterCorrect) {
        cout << results[2] << endl;
    } else if (FARVATOR < counterWrong) {
        cout << results[0] << endl;
    } else {
        cout << results[1] << endl;
    }

    return 0;
}