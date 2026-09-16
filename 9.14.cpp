#include <iostream>
using namespace std;


// int* getBonus (int base) {
//     int multiplier = 3;
//     int* bonusPtr = new int;

//     *bonusPtr = base * multiplier;
//     return bonusPtr;
// }
// int main() {
//     int base = 4;
//     int* bonus = getBonus(base);
//     cout << *bonus << endl;
//     delete bonus;
//     return 0;
// }


// Pointers to structs

struct Student {
    string name;
    int age;
};

int main() {
    Student s0;
    Student * sptr;

    sptr = &s0;

    // Accessing members:
    s0.name = "Pat";
    s0.age = 44;

    // Access s0 via the sptr pointer
    (*sptr).name = "Pat";
    (*sptr).age = 44;

    // Access shit the cool way - Equivelent syntax
    sptr->name = "Pat";
    sptr->age = 44;

}

// Pointers and classes

class Robot {
    private:
        string name;
        int batteryLevel;

    public:
    // Setters
    void setName (string n) {
        name = n;
    }
    void setBatteryLevel(int level) {
        batteryLevel = level;
    }
    // Getters
    string getName() {
        return name;
    }
    int getBatteryLevel() {
        return batteryLevel;
    }
    void printStatus() {
        cout << name << " has " << batteryLevel << "% battery." << endl;
    }
};


int main() {
    // Allocatre a Robot object on the heap
    Robot* myRobot = new Robot();
    // Access via accessor methods, using ->
    myRobot->setName("R2D2");
    myRobot->setBatteryLevel(85);
    cout << myRobot->getName() << endl;
    myRobot->printStatus();
    delete myRobot; // free the head memory
    return 0;
}