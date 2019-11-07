#include "database.h"
#include <string>
#include <sstream>
using namespace std;
void Database::Add(const Date& date,
	const string& event) {

	database[date].push_back(event);

}
void Database::Print(ostream& stream) const  {

	for (const auto& item : database) {
		stream << item.first;
		for (const auto& it : item.second) {
			stream << it << " ";
		}
	}

}