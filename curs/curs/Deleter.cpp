#include "Deleter.h"



void Deleter::del_Employee(vector<Employee>& temp)
{
	int index = 0;
	if (finder.find_Employee(temp, index)) { return; };


	printer.print_Employee(temp[index]);
	print("Do you really want delete? (y/n) :");
	char control = input_char();



	if (control == 'Y' || control == 'y') {
		//удаление объекта
		temp.erase(temp.begin() + index);
	}
}

void Deleter::del_Product(vector<Product>& temp)
{
	int index = 0;
	if (finder.find_Product(temp, index)) { return; };


	printer.print_Product(temp[index]);
	print("Do you really want delete? (y/n) :");
	char control = input_char();



	if (control == 'Y' || control == 'y') {
		//удаление объекта
		temp.erase(temp.begin() + index);
	}
}

void Deleter::del_Sale(vector<Sale>& temp)
{
	int index = 0;
	if (finder.find_Sale(temp, index)) { return; };

	printer.print_Sale(temp[index]);
	print("Do you really want delete? (y/n) :");
	char control = input_char();



	if (control == 'Y' || control == 'y') {
		//удаление объекта
		temp.erase(temp.begin() + index);
	}
}
