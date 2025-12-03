#include "People.h"

People::People() {}

People::People(string n, Date b) : name(n), birthday(b) {}

string People::getName() const { return name; }
Date People::getBirthday() const { return birthday; }

void People::setName(string n) { name = n; }
void People::setBirthday(Date d) { birthday = d; }

bool People::operator<(const People& rhs) const {
    return name < rhs.name;
}

bool People::operator==(const People& rhs) const {
    return name == rhs.name &&
           birthday == rhs.birthday;
}
