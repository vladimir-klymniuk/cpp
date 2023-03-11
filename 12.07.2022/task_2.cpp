// Задание 2. Написать игру «Кубики».

// Пользователь и компьютер по очереди бросают 2 кубика.
// Победитель – тот, у кого по результатам 3х бросков сумма больше. 
// Предусмотреть красивый интерфейс игры.

#include <iostream>

using namespace std;

int main() {
    unsigned int playerOneRes, playerTwoRes, playerOneThrow1, playerOneThrow2, playerTwoThrow1, playerTwoThrow2;
    int throwsCount = 3;
    bool nullVariable;
    playerOneRes = 0;
    playerTwoRes = 0;
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    cout << "Пользователь и компьютер по очереди бросают 2 кубика."  << endl;
    cout << "Победитель – тот, у кого по результатам 3х бросков сумма больше. "  << endl;

    cout << "Player 1 , enter the + to start autoplay." << endl;
    cin >> nullVariable;

    for (int i = 0; i < throwsCount; i ++) {
        playerOneThrow1 = rand() % 21;
        playerOneThrow2 = rand() % 21;
        playerTwoThrow1 = rand() % 21;
        playerTwoThrow2 = rand() % 21;

        playerOneRes += playerOneThrow1;
        playerOneRes += playerOneThrow2;
        playerTwoRes += playerTwoThrow1;
        playerTwoRes += playerTwoThrow2;

        cout << "Player 1, result Y: " << playerOneThrow1 << "\tZ:" << playerOneThrow2 << endl;
        cout << "Player 2, result Y: " << playerTwoThrow1 << "\tZ:" << playerTwoThrow2 << endl;
        cout << endl;
        cout << endl;
    }

    cout << "Total:"  << endl;
    cout << "\t" << "Player one result are:" << playerOneRes  << endl;
    cout << "\t" << "Player two result are:" << playerTwoRes  << endl;

    return 0;
}