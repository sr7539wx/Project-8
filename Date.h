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
    Date() : month(0), day(0), year(0) {}
    Date(int m, int d, int y) : month(m), day(d), year(y) {}

    // Getters
    int getMonth() const { return month; }
    int getDay() const { return day; }
    int getYear() const { return year; }

    // Setters
    void setMonth(int m) { month = m; }
    void setDay(int d) { day = d; }
    void setYear(int y) { year = y; }

    // Operators
    friend istream& operator>>(istream& in, Date& b) {
        in >> b.month >> b.day >> b.year;
        return in;
    }

    friend ostream& operator<<(ostream& out, const Date& b) {
        out << b.month << " " << b.day << " " << b.year;
        return out;
    }

    bool operator==(const Date& rhs) const {
        return (month == rhs.month &&
                day == rhs.day &&
                year == rhs.year);
    }
};

#endif
