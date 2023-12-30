#pragma once
#include <format>
#include <vector>
#include <algorithm>

#include "Employee.h"
#include "Product.h"
#include "Sale.h"

#include "Message.h"

using namespace std;

class Sorter
{
public:
	void text_sort_Employee();
	void text_sort_Product();
	void text_sort_Sale();


	void sort_Employee(vector<Employee>&);
	void sort_Product(vector<Product>&);
	void sort_Sale(vector<Sale>&);
};

