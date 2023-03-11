// Вывести на экран фигуры заполненные звездочками. 
// Диалог с пользователем реализовать при помощи меню.
#include <iostream>

//    ______     ______   i _______      _______     ______  
//   |\*****|   |*\    |   |\*****/|    |       |   |\****/|
//   | \****|   |**\   |   | \***/ |    |  /*\  |   | \**/ |
//   |  \***|   |***\  |   |  \ /  |    | /***\ |   | /**\ |
//   |___\**|   |****\ |   |_______|    |/*****\|   |/****\|
//    a            б          в    j       г          д     

//   ________   _______   _______      _______     _______
//   |\****/|  |\      |  |    /*|    |*****/ |   |      /|
//   | \**/ |  |**\    |  |   /**|    |***/   |   |    /**|
//   | /**\ |  |**/    |  |   \**|    |**/    |   |   /***|
 //  |/****\|  |/______|  |____\*|    |/______|   |__/****|
//      e          ж          з             и             к

using namespace std;

void drawLine(int lenght) {
    cout << " ";

    for (int i = 0; i <= lenght; i++) {
        cout << "-";
    }

    cout << endl;
}

void drawDelimeter() {
    cout << "-_-_-_-_" << endl;
}

void drawSquareByMap(int square[4][4]) {
    int len = 4;


}

void drawA() {
    int x, y;
    x = 4;
    y = 4;

    drawLine(x);

    for (int i = 0; i < x; i++) {
        cout << "|";

        for (int j = 0; j <= y; j++) {
                if (i == j) {
                    cout << "\\";    
                }

                if (i > j) {
                    cout << " ";
                }

                if (j > i) {
                    cout << "*";
                }
                
        }
        cout << " |";
        cout << endl;
    }

    drawLine(x);
}

void drawB() {
    int x, y;
    x = 4;
    y = 4;

    drawLine(x);

    for (int i = 0; i <= x; i++) {
        cout << "|";

        for (int j = 0; j <= y; j++) {
            if (i == j) {
                cout << "\\";
            }

            if (i > j) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << "|";
        cout << endl;
    }

    drawLine(x);
}

void drawC() {
    int len = 4;
    int square[len][len];
    square[0][0] = 1;
    square[0][1] = 3;
    square[0][2] = 3;
    square[0][3] = 2;
    square[1][0] = 0;
    square[1][1] = 1;
    square[1][2] = 2;
    square[1][3] = 0;
    square[2][0] = 0;
    square[2][1] = 0;
    square[2][2] = 0;
    square[2][3] = 0;
    square[3][0] = 0;
    square[3][1] = 0;
    square[3][2] = 0;
    square[3][3] = 0;

    cout << " ----" << endl;
    for (int i = 0; i < len; i++) {

        cout << "|";

        for (int j = 0; j < len; j++) {

            if (square[i][j] == 0) {
                cout << "-";
            }

            if (square[i][j] == 1) {
                cout << "\\";
            }

            if(square[i][j] == 2) {
                cout << "/";
            }

            if(square[i][j] == 3) {
                cout << "*";
            }
        }
       
       cout << "|" << endl;
    }
    cout << " ----" << endl;
}

void drawG() {
    int len = 4;
    int square[len][len];
    square[0][0] = 0;
    square[0][1] = 0;
    square[0][2] = 0;
    square[0][3] = 0;

    square[1][0] = 0;
    square[1][1] = 0;
    square[1][2] = 0;
    square[1][3] = 0;

    square[2][0] = 0;
    square[2][1] = 2;
    square[2][2] = 1;
    square[2][3] = 0;

    square[3][0] = 2;
    square[3][1] = 3;
    square[3][2] = 3;
    square[3][3] = 1;

    cout << " ----" << endl;
    for (int i = 0; i < len; i++) {

        cout << "|";

        for (int j = 0; j < len; j++) {

            if (square[i][j] == 0) {
                cout << "-";
            }

            if (square[i][j] == 1) {
                cout << "\\";
            }

            if(square[i][j] == 2) {
                cout << "/";
            }

            if(square[i][j] == 3) {
                cout << "*";
            }
        }
       
       cout << "|" << endl;
    }
    cout << " ----" << endl;
}

void drawD() {
    int len = 4;
    int square[len][len];
    square[0][0] = 1;
    square[0][1] = 3;
    square[0][2] = 3;
    square[0][3] = 2;
    
    square[1][0] = 0;
    square[1][1] = 1;
    square[1][2] = 2;
    square[1][3] = 0;

    square[2][0] = 0;
    square[2][1] = 2;
    square[2][2] = 1;
    square[2][3] = 0;
    
    square[3][0] = 2;
    square[3][1] = 3;
    square[3][2] = 3;
    square[3][3] = 1;

    cout << " ----" << endl;
    for (int i = 0; i < len; i++) {

        cout << "|";

        for (int j = 0; j < len; j++) {

            if (square[i][j] == 0) {
                cout << "-";
            }

            if (square[i][j] == 1) {
                cout << "\\";
            }

            if(square[i][j] == 2) {
                cout << "/";
            }

            if(square[i][j] == 3) {
                cout << "*";
            }
        }
       
       cout << "|" << endl;
    }
    cout << " ----" << endl;
}

void drawE() {
    int len = 4;
    int square[len][len];
    square[0][0] = 1;
    square[0][1] = 3;
    square[0][2] = 3;
    square[0][3] = 2;
    
    square[1][0] = 0;
    square[1][1] = 1;
    square[1][2] = 2;
    square[1][3] = 0;

    square[2][0] = 0;
    square[2][1] = 2;
    square[2][2] = 1;
    square[2][3] = 0;
    
    square[3][0] = 2;
    square[3][1] = 3;
    square[3][2] = 3;
    square[3][3] = 1;

    cout << " ----" << endl;
    for (int i = 0; i < len; i++) {

        cout << "|";

        for (int j = 0; j < len; j++) {

            if (square[i][j] == 0) {
                cout << "*";
            }

            if (square[i][j] == 1) {
                cout << "\\";
            }

            if(square[i][j] == 2) {
                cout << "/";
            }

            if(square[i][j] == 3) {
                cout << "-";
            }
        }
       
       cout << "|" << endl;
    }
    cout << " ----" << endl;
}

void drawJ() {
    int len = 4;
    int square[len][len];
    square[0][0] = 1;
    square[0][1] = 0;
    square[0][2] = 0;
    square[0][3] = 0;
    
    square[1][0] = 3;
    square[1][1] = 1;
    square[1][2] = 0;
    square[1][3] = 0;

    square[2][0] = 3;
    square[2][1] = 2;
    square[2][2] = 0;
    square[2][3] = 0;
    
    square[3][0] = 2;
    square[3][1] = 0;
    square[3][2] = 0;
    square[3][3] = 0;

    cout << " ----" << endl;
    for (int i = 0; i < len; i++) {

        cout << "|";

        for (int j = 0; j < len; j++) {

            if (square[i][j] == 0) {
                cout << "-";
            }

            if (square[i][j] == 1) {
                cout << "\\";
            }

            if(square[i][j] == 2) {
                cout << "/";
            }

            if(square[i][j] == 3) {
                cout << "*";
            }
        }
       
       cout << "|" << endl;
    }
    cout << " ----" << endl;
}

void drawZ() {
    int len = 4;
    int square[len][len];
    square[0][0] = 0;
    square[0][1] = 0;
    square[0][2] = 0;
    square[0][3] = 2;

    square[1][0] = 0;
    square[1][1] = 0;
    square[1][2] = 2;
    square[1][3] = 3;

    square[2][0] = 0;
    square[2][1] = 0;
    square[2][2] = 1;
    square[2][3] = 3;
    
    square[3][0] = 0;
    square[3][1] = 0;
    square[3][2] = 0;
    square[3][3] = 1;

    cout << " ----" << endl;
    for (int i = 0; i < len; i++) {

        cout << "|";

        for (int j = 0; j < len; j++) {

            if (square[i][j] == 0) {
                cout << "-";
            }

            if (square[i][j] == 1) {
                cout << "\\";
            }

            if(square[i][j] == 2) {
                cout << "/";
            }

            if(square[i][j] == 3) {
                cout << "*";
            }
        }
       
       cout << "|" << endl;
    }
    cout << " ----" << endl;
}

void drawI() {
    int len = 4;
    int square[len][len];
    square[0][0] = 3;
    square[0][1] = 3;
    square[0][2] = 3;
    square[0][3] = 2;
    
    square[1][0] = 3;
    square[1][1] = 3;
    square[1][2] = 2;
    square[1][3] = 0;

    square[2][0] = 3;
    square[2][1] = 2;
    square[2][2] = 0;
    square[2][3] = 0;
    
    square[3][0] = 2;
    square[3][1] = 0;
    square[3][2] = 0;
    square[3][3] = 0;

    cout << " ----" << endl;
    for (int i = 0; i < len; i++) {

        cout << "|";

        for (int j = 0; j < len; j++) {

            if (square[i][j] == 0) {
                cout << "-";
            }

            if (square[i][j] == 1) {
                cout << "\\";
            }

            if(square[i][j] == 2) {
                cout << "/";
            }

            if(square[i][j] == 3) {
                cout << "*";
            }
        }
       
       cout << "|" << endl;
    }
    cout << " ----" << endl;
}

void drawK() {
    int len = 4;
    int square[len][len];
    square[0][0] = 0;
    square[0][1] = 0;
    square[0][2] = 0;
    square[0][3] = 2;
    
    square[1][0] = 0;
    square[1][1] = 0;
    square[1][2] = 2;
    square[1][3] = 3;

    square[2][0] = 0;
    square[2][1] = 2;
    square[2][2] = 3;
    square[2][3] = 3;
    
    square[3][0] = 2;
    square[3][1] = 3;
    square[3][2] = 3;
    square[3][3] = 3;

    cout << " ----" << endl;
    for (int i = 0; i < len; i++) {

        cout << "|";

        for (int j = 0; j < len; j++) {

            if (square[i][j] == 0) {
                cout << "-";
            }

            if (square[i][j] == 1) {
                cout << "\\";
            }

            if(square[i][j] == 2) {
                cout << "/";
            }

            if(square[i][j] == 3) {
                cout << "*";
            }
        }
       
       cout << "|" << endl;
    }
    cout << " ----" << endl;
}

int main() {
    drawA();
    drawDelimeter();

    drawB();
    drawDelimeter();

    drawC();
    drawDelimeter();

    drawG();
    drawDelimeter();

    drawD();
    drawDelimeter();

    drawE();
    drawDelimeter();

    drawJ();
    drawDelimeter();

    drawZ();
    drawDelimeter();

    drawI();
    drawDelimeter();

    drawK();
    drawDelimeter();

    return 0;
}