#pragma once
#include <string>

using namespace std;

class Sale
{
private:
	int	ID_employee;
	int ID_product;
	string Date_sale;
	string Type_payment;


/// Constructor
public:

	Sale();
	Sale(int, int, string, string);


/// set/get functions
public:
	void set_ID_employee(int);
	void set_ID_product(int);
	void set_Date_sale(string);
	void set_Type_payment(string);


	int get_ID_employee();
	int get_ID_product();
	string get_Date_sale();
	string get_Type_payment();

};

