#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date {
private:
    int month;
    int day;
    int year;

public:
    Date();
    Date(int m, int d, int y);

    int getMonth() const;
    int getDay() const;
    int getYear() const;

    void setMonth(int m);
    void setDay(int d);
    void setYear(int y);

    bool operator==(const Date& rhs) const;

    friend istream& operator>>(istream& in, Date& b);
    friend ostream& operator<<(ostream& out, const Date& b);
};

#endif
