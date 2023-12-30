#include "Product.h"



/// 
/// Constructor
/// 
Product::Product():Product::Product(0, "", 0)
{
}

Product::Product(int id, string Name, double Price)
{
	this->ID_product = id;
	this->Name = Name;
	this->Price = Price;
}



/// 
/// set/get functions
///
void Product::set_ID_product(int id)
{
	this->ID_product = id;
}

void Product::set_Name(string temp)
{
	this->Name = temp;
}

void Product::set_Price(double temp)
{
	this->Price = temp;
}




int Product::get_ID_product()
{
	return ID_product;
}

string Product::get_Name()
{
	return Name;
}

double Product::get_Price()
{
	return Price;
}
