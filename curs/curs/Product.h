#pragma once
#include <string>

using namespace std;

class Product
{
private: 
	int ID_product;
	string Name;
	double Price;


/// Constructor
public:
	Product();
	Product(int, string, double);


/// set/get functions
public:
	void set_ID_product(int);
	void set_Name(string);
	void set_Price(double);


	int get_ID_product();
	string get_Name();
	double get_Price();

};

