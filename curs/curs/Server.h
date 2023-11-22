#pragma once
#include <string>
#include <format>
#include <vector>

#include "Employee.h"
#include "Product.h"
#include "Sale.h"

using namespace std;


string Print_Employee(Employee &);

string Print_Product(Product &);

string Print_Sale(Sale &);



string Print_Vec_Employee(vector <Employee>&);

string Print_Vec_Product(vector <Product>&);

string Print_Vec_Sale(vector <Sale>&);



void Add_Element_Employee(vector <Employee>&);

void Add_Element_Product(vector <Product>&);

void Add_Element_Sale(vector <Sale>&);