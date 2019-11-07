#pragma once
//database.h / cpp — эти файлы должны содержать объявление
//и определение класса Database;
#include "date.h"
#include <map>
#include <vector>
class Database{
public:
	void Add(const Date& date, const string& event);
	void Print(ostream& stream) const;
	void FindIf();
	void Del();
	void Last();
	void RemoveIf();
private:
	map<Date, vector<string>> database;
};

