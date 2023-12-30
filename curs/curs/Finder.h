#pragma once
#include <vector>
#include <format>
#include <string>

#include "Employee.h"
#include "Product.h"
#include "Sale.h"

#include "Message.h"

using namespace std;

class Finder
{
private:
	void text_find_Employee();
	void text_find_Product();
	void text_find_Sale();

public:
	int find_Employee(vector<Employee>&, int&);
	int find_Product(vector<Product>&, int&);
	int find_Sale(vector<Sale>&, int&);


	///Employee
	int find_id_Employee(vector<Employee>, int&, int);

	int find_Id_Employee(vector<Employee>&, int&);
	int find_Fname_Employee(vector<Employee>&, int&);
	int find_Lname_Employee(vector<Employee>&, int&);
	int find_Post_Employee(vector<Employee>&, int&);
	int find_Phone_Employee(vector<Employee>&, int&);



	//Product
	int find_id_Product(vector<Product>, int&, int);

	int find_ID_Product(vector<Product>&, int&);
	int find_Name_Product(vector<Product>&, int&);
	int find_Price_Product(vector<Product>&, int&);


	//Sale
	int find_ID_Sale(vector<Sale>&, int&);
	int find_Date_Sale(vector<Sale>&, int&);
	int find_Type_Sale(vector<Sale>&, int&);

	int find_idP_by_idE_Sale(vector<Sale>&, vector<int>&, vector<int>&, int);
	int find_idE_by_idP_Sale(vector<Sale>&, vector<int>&, vector<int>&, int);



	int find_max_id_Employee(vector<Employee>&);
	int find_max_id_Product(vector<Product>&);

};

