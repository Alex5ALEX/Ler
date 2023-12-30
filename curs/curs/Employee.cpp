#include "Employee.h"



/// 
/// Constructor
/// 
Employee::Employee() : Employee::Employee(0, "", "", "", "")
{
}

Employee::Employee(int id, string First_name, string Last_name, string Post, string Phone_number)
{
	this->ID_employee = id;
	this->First_name = First_name;
	this->Last_name = Last_name;
	this->Post = Post;
	this->Phone_number = Phone_number;
}



/// 
/// set/get functions
///
void Employee::set_ID_employee(int id)
{
	this->ID_employee = id;
}


void Employee::set_First_name(string temp)
{
	this->First_name = temp;
}

void Employee::set_Last_name(string temp)
{
	this->Last_name = temp; 
}

void Employee::set_Post(string temp)
{
	this->Post = temp;
}

void Employee::set_Phone_number(string temp)
{
	this->Phone_number = temp;
}


int Employee::get_ID_employee()
{
	return ID_employee;
}

string Employee::get_First_name()
{
	return First_name;
}

string Employee::get_Last_name()
{
	return Last_name;
}

string Employee::get_Post()
{
	return Post;
}

string Employee::get_Phone_number()
{
	return Phone_number;
}
