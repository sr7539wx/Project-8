#ifndef PEOPLEDB_H
#define PEOPLEDB_H

#include <iostream>
#include <fstream>
#include "People.h"
#include "BinarySearchTree.h"
using namespace std;

class PeopleDB {
private:
    BinarySearchTree<People> db;

public:
    PeopleDB(string filename);  
    void display();
};

#endif
