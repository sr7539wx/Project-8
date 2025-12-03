#ifndef PEOPLE_H
#define PEOPLE_H

#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class People {
private:
    string name;
    Date birthday;

public:
    People();
    People(string n, Date b);

    string getName() const;
    Date getBirthday() const;

    void setName(string n);
    void setBirthday(Date d);

    bool operator<(const People& rhs) const;
    bool operator==(const People& rhs) const;

    friend istream& operator>>(istream& in, People& p);
    friend ostream& operator<<(ostream& out, const People& p);
};

#endif
