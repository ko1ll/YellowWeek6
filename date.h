#pragma once
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
//date.h/cpp — эти файлы должны содержать объявления и определения класса Date,
//функции ParseDate и оператора вывода в поток для класса Date;
class Date {
public:
	Date(const int& year,
		const int& month, const int& day) :
		day_(day), year_(year), month_(month) {};
	const int day_;
	const int year_;
	const int month_;
};


Date ParseDate(istream& stream);

ostream& operator <<(ostream& stream, const Date& date);