#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, char* argv[]) {
    // interact with the user
    
    // argc
    cout << "number of terminal inputs: " << argc << endl;

    // argv
    for (int i = 0; i < argc; i++) {
        cout << "argv[" << i << "] = " << argv[i] << endl;
    }
}


//stringstream is a class that allows you to read and write strings as if they were streams. It is part of the C++ Standard Library and is defined in the <sstream> header. The stringstream class can be used to perform input and output operations on strings, similar to how you would use cin and cout for console input and output.
//puts bookmarks when reading a line with getline
//goes first in the getline()
//inStream is a class that allows you to read data from various input sources, such as files, strings, or standard input. It is part of the C++ Standard Library and is defined in the <istream> header. The istream class provides functions for reading formatted and unformatted data, as well as for handling input errors. It is commonly used with objects like cin (for console input) and ifstream (for file input).
//function overloading is a feature in C++ that allows you to define multiple functions with the same name but different parameter lists. This enables you to create functions that can handle different types or numbers of arguments, making your code more flexible and easier to read. The compiler determines which function to call based on the arguments provided during the function call.