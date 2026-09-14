#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int arr[] = {1, 2, 3, 4, 5}; //call stack memory

int arry[5]; //garbage data

struct Tree {
    string species;
    int age;
    int size;
    //etc
};

int main() {
	arr[5] = 10; //out of bounds access
	arr[2] = 1.9; //truncation of double to int = 1

    void foo(int arr[], int size); //array can be changed in function

    Tree tree1;

    tree1.species = "Oak";
    tree1.age = 100;
    tree1.size = 50;

    Tree trees[5]; //array of structs

    trees[0].species = "Pine";
    trees[0].age = 50;
    trees[0].size = 40;
    trees[1].species = "Maple";
    trees[1].age = 30;
    trees[1].size = 30;

    ifstream file;
    file.open("data.txt"); //opens file
    //read file
    
    // int x;
    // while (file >> x) {
    //     cout << x << endl;
    // }

    string arr[5];  
    for (int i = 0; i < 5; i++) {
        std::getline(file, arr[i], ','); //read string from file
    }

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    file.close(); //close file  

	return 0;
}




