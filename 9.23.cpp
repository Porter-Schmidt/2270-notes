#include <iostream>
using namespace std;

int main() {


}


// The Destructor
// Destructor gets called when its function pops off the stack

class SLL {
    private:

    public:
        SLL(); // Constructor
        ~SLL(); // Deconstructor
};

// We can also call the destructor mainually, but this is NOT typically done. E.G.:
int main() {
    SLL s0;
    s0.~SLL(); // manually call the destructor, not typically done
}