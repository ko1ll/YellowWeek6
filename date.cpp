#include "date.h"


ostream& operator <<(ostream& stream, const Date& date) {
	stream << setfill('0');
	stream << setw(4) << date.year_ << "-"
		<< setw(2) << date.month_ << "-"
		<< setw(2) << date.day_ << " ";
	return stream;
}
Date ParseDate(istream& stream) {
	int day, year, month;
	stream >> year;
	stream.ignore(1);
	stream >> month;
	stream.ignore(1);
	stream >> day;
	stream.ignore(1);
	return Date(year, month, day);
};