#include <iostream>

using namespace std;

float claculateParallelepipedVolume(float length, float width, float height) {
    return length * width * height;
}

int main() {
    float length, width, height;
    cout << "Please, enter the length:" << endl;
    cin >> length;

    cout << "Please, enter the width:" << endl;
    cin >> width;

    cout << "Please, enter the hight:" << endl;
    cin >> height;
    
    cout << "A Parallelepiped volume value is: " << claculateParallelepipedVolume(length, width, height) << endl;

    return 0;
}