#include "PeopleDB.h"

PeopleDB::PeopleDB(string filename) {
    ifstream fin(filename);

    if (!fin) {
        cout << "Error opening file!" << endl;
        return;
    }

    People temp;
    while (fin >> temp) {
        db.add(temp);
    }
}

void PeopleDB::display() {
    cout << "Database (Sorted by Name):" << endl;

    auto visit = [](People& p) {
        cout << p << endl;
    };

    db.inorderTraverse(visit);
}
