#include "Message.h"


void print(string out) {
	cout << out;
}



char input_char() {
	char out = ' ';
	cin >> out;
	return out;
}






bool input_id(int& temp) {

	string str;
	cmatch result;
	regex regular("([0-9]*)");

	cin >> str;

	try
	{
		if (regex_match(str.c_str(), result, regular)) {
			temp = stoi(result[0]);
			return 0;
		}
		throw invalid_argument("An integer was expected");
	}
	catch (const std::exception& e)
	{
		cout << "ERROR" << endl;
		cout << e.what() << endl;
		return 1;
	}

}


bool handle_int(string& str, int& temp) {

	cmatch result;
	regex regular("([0-9]*)");


	try
	{
		//(regex_match(str.c_str(), result, regular)
		if (regex_match(str.c_str(), result, regular)) {
			temp = stoi(result[0]);
			return 1;
		}
		throw invalid_argument("An integer was expected");
	}
	catch (const std::exception& e)
	{
		return 0;
	}
}


bool input_double(double& temp) {
	string str;
	cmatch result;
	regex regular("([0-9]*)");
	regex regular1("([0-9]*)(.)([0-9]*)");

	cin >> str;

	try
	{
		//(regex_match(str.c_str(), result, regular)
		if (regex_match(str.c_str(), result, regular)) {
			temp = stod(result[0]);
			return 0;
		}
		if (regex_match(str.c_str(), result, regular1)) {
			temp = stod(result[0]);
			return 0;
		}
		throw invalid_argument("An double was expected");
	}
	catch (const std::exception& e)
	{
		cout << "ERROR" << endl;
		cout << e.what() << endl;
		return 1;
	}
}


bool handle_double(string& str, double& temp) {

	cmatch result;
	regex regular("([0-9]*)");
	regex regular1("([0-9]*)(.)([0-9]*)");


	try
	{
		if (regex_match(str.c_str(), result, regular)) {
			temp = stod(result[0]);
			return 0;
		}
		if (regex_match(str.c_str(), result, regular1)) {
			temp = stod(result[0]);
			return 0;
		}
		throw invalid_argument("An double was expected");
	}
	catch (const std::exception& e)
	{
		return 1;
	}
}


bool input_telephone(string& temp) {
	string str;
	cmatch result;
	regex regular("([+]{1})([0-9]*)");

	cout << "Input telephone number in format \"+0...0\" :" << endl;
	cin >> str;

	try
	{
		//(regex_match(str.c_str(), result, regular)
		if (regex_match(str.c_str(), result, regular)) {
			temp = str;
			return 0;
		}
		throw invalid_argument("An date was expected");
	}
	catch (const std::exception& e)
	{
		cout << "ERROR" << endl;
		cout << e.what() << endl;
		return 1;
	}

}


bool input_date(string& temp) {
	string str;
	cmatch result;
	regex regular("([0-9]{1,2})(.)([0-9]{1,2})(.)([0-9]{4})");

	cout << "Input date in format \"DD.MM.YYYY\" :" << endl;
	cin >> str;

	try
	{
		//(regex_match(str.c_str(), result, regular)
		if (regex_match(str.c_str(), result, regular)) {
			temp = str;
			return 0;
		}
		throw invalid_argument("An date was expected");
	}
	catch (const std::exception& e)
	{
		cout << "ERROR" << endl;
		cout << e.what() << endl;
		return 1;
	}

}



bool handle_date(string& str, int& d, int& m, int& y) {
	cmatch result;
	regex regular("([0-9]{1,2})(.)([0-9]{1,2})(.)([0-9]{4})");



	if (regex_match(str.c_str(), result, regular)) {
		d = stoi(result[1]);
		m = stoi(result[3]);
		y = stoi(result[5]);
		return 0;
	}

	print("An date was expected");
	return 1;
}



string input_str() {
	string a,b;
	cin >> a;
	getline(cin, b);
	return a+b;
}