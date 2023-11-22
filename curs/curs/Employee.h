#pragma once
#include <string>

using namespace std;

class Employee
{
private:
	int ID_employee;
	string First_name;
	string Last_name;
	string Post;
	string Phone_number;


/// Constructor
public:
	Employee();
	Employee(int, string, string, string, string);


/// set/get functions
public:
	void set_ID_employee(int);
	void set_First_name(string);
	void set_Last_name(string);
	void set_Post(string);
	void set_Phone_number(string);


	int get_ID_employee();
	string get_First_name();
	string get_Last_name();
	string get_Post();
	string get_Phone_number();



};

