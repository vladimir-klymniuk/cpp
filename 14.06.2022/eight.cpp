#include <iostream>

using namespace std;

float const YEARLY_PERCENT = 0.15;
float const YEARS = 3;

float calculate(float amount, int years, float percent) {
    return (((amount * percent)  * years) + amount);
}

int main() {
    float amount;
    cout << "Please, enter the amount: " << endl;
    cin >> amount;

    cout << "Amount after ten years: " << calculate(amount, YEARS, YEARLY_PERCENT) << endl;

    return 0;
}