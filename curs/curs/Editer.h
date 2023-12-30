#pragma once
#include <vector>
#include <format>
#include <string>

#include "Employee.h"
#include "Product.h"
#include "Sale.h"

#include "Finder.h"
#include "Printer.h"

#include "Message.h"

using namespace std;

class Editer
{
private:
	Finder finder;
	Printer printer;

private:
	void text_edit_Employee();
	void text_edit_Product();
	void text_edit_Sale();



public:
	void edit_Employee(vector<Employee>&);
	void edit_Product(vector<Product>&);
	void edit_Sale(vector<Sale>&);
};

