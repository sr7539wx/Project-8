#include "Date.h"

Date::Date() : month(0), day(0), year(0) {}

Date::Date(int m, int d, int y) : month(m), day(d), year(y) {}

int Date::getMonth() const { return month; }
int Date::getDay() const { return day; }
int Date::getYear() const { return year; }

void Date::setMonth(int m) { month = m; }
void Date::setDay(int d) { day = d; }
void Date::setYear(int y) { year = y; }

bool Date::operator==(const Date& rhs) const {
    return (month == rhs.month && day == rhs.day && year == rhs.year);
}
