#pragma once
#include <format>
#include <vector>
#include <fstream>

#include "Employee.h"
#include "Product.h"
#include "Sale.h"

#include "Message.h"
#include "Finder.h"

using namespace std;


class Printer
{
private:
	Finder finder;

public:
	//PRINT ELEMENT
	void print_Employee(Employee&);
	void print_Product(Product&);
	void print_Sale(Sale&);


	//PRINT VECTOR
	void print_Vec_Employee(vector<Employee>&);
	void print_Vec_Product(vector<Product>&);
	void print_Vec_Sale(vector<Sale>&);


	//PRINIT SELECTED
	void print_select_Employee(vector<Employee>&);
	void print_select_Product(vector<Product>&);
	void print_select_Sale(vector<Sale>&);



	//PRINT IN FILE
	void print_File_Employee(vector<Employee>&);
	void print_File_Product(vector<Product>&);
	void print_File_Sale(vector<Sale>&);


};

