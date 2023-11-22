#include "Sale.h"



/// 
/// Constructor
/// 
Sale::Sale() : Sale::Sale(0,0,"","")
{
}

Sale::Sale(int ID_employee, int ID_product, string Date_sale, string Type_payment)
{
	this->ID_employee = ID_employee;
	this->ID_product = ID_product;
	this->Date_sale = Date_sale;
	this->Type_payment = Type_payment;
}



/// 
/// set/get functions
///
void Sale::set_ID_employee(int temp)
{
	this->ID_employee = temp;
}

void Sale::set_ID_product(int temp)
{
	this->ID_product = temp;
}

void Sale::set_Date_sale(string temp)
{
	this->Date_sale = temp;
}

void Sale::set_Type_payment(string temp)
{
	this->Type_payment = temp;
}


int Sale::get_ID_employee()
{
	return ID_employee;
}

int Sale::get_ID_product()
{
	return ID_product;
}

string Sale::get_Date_sale()
{
	return Date_sale;
}

string Sale::get_Type_payment()
{
	return Type_payment;
}
