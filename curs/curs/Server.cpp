#include "Server.h"



string Print_Employee(Employee& temp) {
	string out;

	out += format("{:*^60}\n", "EMPLOYEE");

	out += format("{:<20}|{:<40}\n", "ID" , temp.get_ID_employee());
	out += format("{:<20}|{:<40}\n", "First Name", temp.get_First_name());
	out += format("{:<20}|{:<40}\n", "Last Name", temp.get_Last_name());
	out += format("{:<20}|{:<40}\n", "Post", temp.get_Post());
	out += format("{:<20}|{:<40}\n", "Phone Number", temp.get_Phone_number());

	out += format("{:*<60}\n", "");

	return out;
}

string Print_Product(Product& temp) {
	string out;

	out += format("{:*^60}\n", "PRODUCT");

	out += format("{:<20}|{:<40}\n", "ID", temp.get_ID_product());
	out += format("{:<20}|{:<40}\n", "Name", temp.get_Name());
	out += format("{:<20}|{:<40}\n", "Price", temp.get_Price());

	out += format("{:*<60}\n", "");

	return out;
}

string Print_Sale(Sale& temp) {
	string out;

	out += format("{:*^60}\n", "SALE");

	out += format("{:<20}|{:<40}\n", "ID Employee", temp.get_ID_employee());
	out += format("{:<20}|{:<40}\n", "ID Product", temp.get_ID_product());
	out += format("{:<20}|{:<40}\n", "Date", temp.get_Date_sale());
	out += format("{:<20}|{:<40}\n", "Price", temp.get_Type_payment());

	out += format("{:*<60}\n", "");

	return out;
}



string Print_Vec_Employee(vector <Employee>& temp) {
	string out;

	for (int i = 0; i < temp.size(); i++) {
		out += Print_Employee(temp[i]);
	}

	return out;
}

string Print_Vec_Product(vector <Product>& temp) {
	string out;

	for (int i = 0; i < temp.size(); i++) {
		out += Print_Product(temp[i]);
	}

	return out;
}

string Print_Vec_Sale(vector <Sale>& temp) {
	string out;

	for (int i = 0; i < temp.size(); i++) {
		out += Print_Sale(temp[i]);
	}

	return out;
}



void Add_Element_Employee(vector <Employee>& temp) {
	temp.push_back(Employee());
}

void Add_Element_Product(vector <Product>& temp) {
	temp.push_back(Product());
}

void Add_Element_Sale(vector <Sale>& temp) {
	temp.push_back(Sale());
}