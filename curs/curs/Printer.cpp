#include "Printer.h"


void Printer::print_Employee(Employee& temp)
{
	string out;

	out += format("{:*^60}\n", "EMPLOYEE");

	out += format("{:<20}|{:<40}\n", "ID", temp.get_ID_employee());
	out += format("{:<20}|{:<40}\n", "First Name", temp.get_First_name());
	out += format("{:<20}|{:<40}\n", "Last Name", temp.get_Last_name());
	out += format("{:<20}|{:<40}\n", "Post", temp.get_Post());
	out += format("{:<20}|{:<40}\n", "Phone Number", temp.get_Phone_number());

	out += format("{:*<60}\n", "");

	print(out);
}

void Printer::print_Product(Product& temp)
{
	string out;

	out += format("{:*^60}\n", "PRODUCT");

	out += format("{:<20}|{:<40}\n", "ID", temp.get_ID_product());
	out += format("{:<20}|{:<40}\n", "Name", temp.get_Name());
	out += format("{:<20}|{:<40}\n", "Price", temp.get_Price());

	out += format("{:*<60}\n", "");

	print(out);
}

void Printer::print_Sale(Sale& temp)
{
	string out;

	out += format("{:*^60}\n", "SALE");

	out += format("{:<20}|{:<40}\n", "ID Employee", temp.get_ID_employee());
	out += format("{:<20}|{:<40}\n", "ID Product", temp.get_ID_product());
	out += format("{:<20}|{:<40}\n", "Date", temp.get_Date_sale());
	out += format("{:<20}|{:<40}\n", "Type_payment", temp.get_Type_payment());

	out += format("{:*<60}\n", "");

	print(out);
}



void Printer::print_Vec_Employee(vector<Employee>& temp)
{
	for (int i = 0; i < temp.size(); i++) {
		print_Employee(temp[i]);
	}
}

void Printer::print_Vec_Product(vector<Product>& temp)
{
	for (int i = 0; i < temp.size(); i++) {
		print_Product(temp[i]);
	}
}

void Printer::print_Vec_Sale(vector<Sale>& temp)
{
	for (int i = 0; i < temp.size(); i++) {
		print_Sale(temp[i]);
	}
}






void Printer::print_select_Employee(vector<Employee>& temp)
{
	int index = 0;
	if (finder.find_Employee(temp, index)) { return; };

	print_Employee(temp[index]);

}

void Printer::print_select_Product(vector<Product>& temp)
{
	int index = 0;
	if (finder.find_Product(temp, index)) { return; };


	print_Product(temp[index]);
}

void Printer::print_select_Sale(vector<Sale>& temp)
{
	int index = 0;
	if (finder.find_Sale(temp, index)) { return; };

	print_Sale(temp[index]);
}





void Printer::print_File_Employee(vector<Employee>& temp)
{
	ofstream file("data/employee_list.txt"); // открываем файл для записи
	file.clear();
	string out;


	for (int i = 0; i < temp.size(); i++) {

		out += format("{:<}\n", temp[i].get_ID_employee());
		out += format("{:<}\n", temp[i].get_First_name());
		out += format("{:<}\n", temp[i].get_Last_name());
		out += format("{:<}\n", temp[i].get_Post());
		out += format("{:<}\n", temp[i].get_Phone_number());


		file << out;
		out = "";
	}
	file.close();


	//ofstream data_file("data/employee/employee_data.txt"); // открываем файл для записи
	//data_file.clear();
	//data_file << finder.find_max_id_Employee(temp);
	//data_file.close();
}

void Printer::print_File_Product(vector<Product>& temp)
{
	ofstream file("data/product_list.txt"); // открываем файл для записи
	file.clear();
	string out;


	for (int i = 0; i < temp.size(); i++) {

		out += format("{:<}\n", temp[i].get_ID_product());
		out += format("{:<}\n", temp[i].get_Name());
		out += format("{:<}\n", temp[i].get_Price());


		file << out;
		out = "";
	}
	file.close();


	//ofstream data_file("data/product/product_data.txt"); // открываем файл для записи
	//data_file.clear();
	//data_file << finder.find_max_id_Product(temp);
	//data_file.close();
}

void Printer::print_File_Sale(vector<Sale>& temp)
{

	ofstream file("data/sale_list.txt"); // открываем файл для записи
	file.clear();
	string out;


	for (int i = 0; i < temp.size(); i++) {

		out += format("{:<}\n", temp[i].get_ID_employee());
		out += format("{:<}\n", temp[i].get_ID_product());
		out += format("{:<}\n", temp[i].get_Date_sale());
		out += format("{:<}\n", temp[i].get_Type_payment());


		file << out;
		out = "";
	}
	file.close();
}
