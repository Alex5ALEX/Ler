#include "Filler.h"

Filler::Filler() {
	ID_employee = 1;
	ID_product = 1;
}




void Filler::input_Employee(vector<Employee>& temp)
{
	string F_name;
	string L_name;
	string Post;
	string Phone_number;
	
	
	print("Input First name : ");
	F_name = input_str();
	
	print("Input Last name : ");
	L_name = input_str();
	
	print("Input Post : ");
	Post = input_str();
		
	input_telephone(Phone_number);


	temp.push_back(Employee(ID_employee, F_name, L_name, Post, Phone_number));
	ID_employee++;
}


void Filler::input_Product(vector<Product>& temp)
{
	string Name;
	double Price = 0;
	
	print("Input Name of product : ");
	Name = input_str();
	
	print("Input price : ");
	input_double(Price);
	

	temp.push_back(Product(ID_product, Name, Price));
	ID_product++;
}


void Filler::input_Sale(vector<Sale>& temp)
{
	int	ID_e = 0;
	int ID_p = 0;
	string Date_sale;
	string Type_pay;



	print("Input ID employee : ");
	input_id(ID_e);

	print("Input ID product : ");
	input_id(ID_p);

	input_date(Date_sale);

	print("Input Type payment : ");
	Type_pay = input_str();


	temp.push_back(Sale(ID_e, ID_p, Date_sale, Type_pay));
}








void Filler::fill_File_Employee(vector<Employee>& temp)
{
	ifstream file("data/employee_list.txt"); // открываем файл для записи

	string id = "";
	int iid = 0;
	string F_name;
	string L_name;
	string Post;
	string Phone_number;



	while (getline(file, id))
	{
		handle_int(id, iid);

		getline(file, F_name);
		getline(file, L_name);
		getline(file, Post);
		getline(file, Phone_number);
		temp.push_back(Employee(iid, F_name, L_name, Post, Phone_number));
	}


	file.close();

	ID_employee = finder.find_max_id_Employee(temp);
	ID_employee++;
}



void Filler::fill_File_Product(vector<Product>& temp)
{
	ifstream file("data/product_list.txt"); // открываем файл для записи

	string id;
	int iid = 0;
	string Name;

	string sPrice;
	double Price;



	while (getline(file, id))
	{
		handle_int(id, iid);

		getline(file, Name);
		getline(file, sPrice);

		handle_double(sPrice, Price);

		temp.push_back(Product(iid, Name, Price));
	}


	file.close();

	ID_product = finder.find_max_id_Product(temp);
	ID_product++;
}

void Filler::fill_File_Sale(vector<Sale>& temp)
{

	ifstream file("data/sale_list.txt"); // открываем файл для записи

	string sEid, sPid;
	int Eid = 0, Pid = 0;

	string Date_sale;
	string Type_payment;



	while (getline(file, sEid))
	{
		handle_int(sEid, Eid);

		getline(file, sPid);
		handle_int(sPid, Pid);

		getline(file, Date_sale);
		getline(file, Type_payment);


		temp.push_back(Sale(Eid, Pid, Date_sale, Type_payment));
	}


	file.close();

}
