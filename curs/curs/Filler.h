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




class Filler
{
private:
	Finder finder;

private:
	int ID_employee;
	int ID_product;

public:
	Filler();

	void input_Employee(vector<Employee>&);
	void input_Product(vector<Product>&);
	void input_Sale(vector<Sale>&);


	void fill_File_Employee(vector<Employee>&);
	void fill_File_Product(vector<Product>&);
	void fill_File_Sale(vector<Sale>&);

};
