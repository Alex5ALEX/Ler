#pragma once
#include <vector>

#include "Employee.h"
#include "Product.h"
#include "Sale.h"


using namespace std;


class Data
{
public:
	vector<Employee> temp_Employee;
	vector<Product> temp_Product;
	vector<Sale> temp_Sale;
};

