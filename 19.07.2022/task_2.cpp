// Написать программу, которая выводит 
// одномерный массив в обратном порядке.

#include <iostream>

using namespace std;

int main() {
    int randSet[] = {
       11, 12, 13, 14, 15, 16,
    };

    int len = sizeof(randSet) / sizeof(int);

    for ( int i = len - 1; i >= 0; i-- ) {        
        cout << randSet[i] << endl;
    }
}
