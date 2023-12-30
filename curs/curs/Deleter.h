#pragma once
#include <vector>

#include "Employee.h"
#include "Product.h"
#include "Sale.h"

#include "Message.h"

#include "Finder.h"
#include "Printer.h"

using namespace std;


class Deleter
{
private:
	Printer printer;
	Finder finder;

public:
	void del_Employee(vector<Employee>&);
	void del_Product(vector<Product>&);
	void del_Sale(vector<Sale>&);

};

