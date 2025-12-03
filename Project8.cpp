#include <iostream>
#include "PeopleDB.h"
using namespace std;

int main() {
    cout << "Loading database from input.txt...\n";

    PeopleDB pdb("input.txt");

    cout << "\n--- People in BST ---\n";
    pdb.display();

    cout << "\nDone.\n";
    return 0;
}
