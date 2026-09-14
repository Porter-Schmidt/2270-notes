#include <iostream>
using namespace std;


int* getBonus (int base) {
    int multiplier = 3;
    int* bonusPtr = new int;

    *bonusPtr = base * multiplier;
    return bonusPtr;
}
int main() {
    int base = 4;
    int* bonus = getBonus(base);
    cout << *bonus << endl;
    delete bonus;
    return 0;
}