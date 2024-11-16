#include <iostream>
#include <string>
#include <regex>
using namespace std;
int main(){
	string data = "16-11-2024";
	regex Regexdata("^\\d{2}-\\d{2}-\\d{4}$");
	if (regex_match(data, Regexdata)) {
		cout << "Date is correct" << endl;
	}
	else {
		cout << "Date is incorrect" << endl;
	}
	return 0;
}