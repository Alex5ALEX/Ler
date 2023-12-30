#include "Finder.h"




void Finder::text_find_Employee()
{
	string out;

	out += format("\n{:*<30}\n", "") + "\n";
	out += format("{:-^30}\n", "Choise serch option") + "\n";

	out += format("{:^5} - {:.20}\n", "1", "ID Employee") + "\n";
	out += format("{:^5} - {:.20}\n", "2", "First name") + "\n";
	out += format("{:^5} - {:.20}\n", "3", "Last_name") + "\n";
	out += format("{:^5} - {:.20}\n", "4", "Post") + "\n";
	out += format("{:^5} - {:.20}\n", "5", "Phone number") + "\n";
	out += format("{:^5} - {:.20}\n", "Q", "Exit") + "\n";

	out += format("{:*<30}\n", "");

	print(out);
}

void Finder::text_find_Product()
{
	string out;

	out += format("\n{:*<30}\n", "") + "\n";
	out += format("{:-^30}\n", "Choise serch option?") + "\n";

	out += format("{:^5} - {:.20}\n", "1", "ID event") + "\n";
	out += format("{:^5} - {:.20}\n", "2", "Name") + "\n";
	out += format("{:^5} - {:.20}\n", "3", "Price") + "\n";
	out += format("{:^5} - {:.20}\n", "Q", "Exit") + "\n";

	out += format("{:*<30}\n", "");

	print(out);
}

void Finder::text_find_Sale()
{ 
	string out;

	out += format("\n{:*<30}\n", "") + "\n";
	out += format("{:-^30}\n", "Choise serch option?") + "\n";

	out += format("{:^5} - {:.20}\n", "1", "ID") + "\n";
	out += format("{:^5} - {:.20}\n", "2", "Date sale") + "\n";
	out += format("{:^5} - {:.20}\n", "3", "Type payment") + "\n";
	out += format("{:^5} - {:.20}\n", "Q", "Exit") + "\n";

	out += format("{:*<30}\n", "");

	print(out);
}






int Finder::find_Employee(vector<Employee>& temp,  int& out)
{

	text_find_Employee();

	char control = input_char();

	switch (control)
	{
	case '1'://ID Employee
		return find_Id_Employee(temp, out);
		break;

	case '2'://First name
		return find_Fname_Employee(temp, out);
		break;

	case '3'://Last_name
		return find_Lname_Employee(temp, out);
		break;

	case '4'://Post
		return find_Post_Employee(temp, out);
		break;

	case '5'://Phone
		return find_Phone_Employee(temp, out);
		break;

	default:
		return 1;
		break;
	}
}

int Finder::find_Product(vector<Product>& temp, int& out)
{
	text_find_Product();

	char control = input_char();

	switch (control)
	{
	case '1'://ID event
		return find_ID_Product(temp, out);
		break;

	case '2'://Name
		return find_Name_Product(temp, out);
		break;

	case '3'://Price
		return find_Price_Product(temp, out);
		break;


	default:
		return 1;
		break;
	}
}

int Finder::find_Sale(vector<Sale>& temp, int& out)
{
	text_find_Sale();

	char control = input_char();

	switch (control)
	{
	case '1'://ID 
		return find_ID_Sale(temp, out);
		break;

	case '2'://date
		return find_Date_Sale(temp, out);
		break;

	case '3'://Type
		return find_Type_Sale(temp, out);
		break;


	default:
		return 1;
		break;
	}
}




///
///		EMPLOYEE
///


int Finder::find_id_Employee(vector<Employee> temp, int& index, int id)
{
	for (int i = 0; i < temp.size(); i++) {
		if (temp[i].get_ID_employee() == id) {
			index = i;
			break;
		}
	}

	return 0;
}

int Finder::find_Id_Employee(vector<Employee>& temp, int& out)
{
	int id = 0;

	print("Input id employee:");
	if (input_id(id)) {return 1;}




	auto result = find_if(temp.begin(), temp.end(), [id](Employee& iter)
		{
			return iter.get_ID_employee() == id;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}

int Finder::find_Fname_Employee(vector<Employee>& temp, int& out)
{
	string Fname;

	print("Input First Name:");
	Fname = input_str();
	

	auto result = find_if(temp.begin(), temp.end(), [Fname](Employee& iter)
		{
			return iter.get_First_name() == Fname;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}

int Finder::find_Lname_Employee(vector<Employee>& temp, int& out)
{
	string Lname;

	print("Input Last Name:");
	Lname = input_str();


	auto result = find_if(temp.begin(), temp.end(), [Lname](Employee& iter)
		{
			return iter.get_Last_name() == Lname;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}

int Finder::find_Post_Employee(vector<Employee>& temp, int& out)
{
	string Post;

	print("Input Post:");
	Post = input_str();


	auto result = find_if(temp.begin(), temp.end(), [Post](Employee& iter)
		{
			return iter.get_Post() == Post;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}

int Finder::find_Phone_Employee(vector<Employee>& temp, int& out)
{
	string Phone;

	if (input_telephone(Phone)) { return 1; };


	auto result = find_if(temp.begin(), temp.end(), [Phone](Employee& iter)
		{
			return iter.get_Phone_number() == Phone;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}


///
///		PRODUCT
///


int Finder::find_id_Product(vector<Product> temp, int& index, int id)
{
	for(int i = 0;i < temp.size(); i++){
		if (temp[i].get_ID_product() == id) {
			index = i;
			break;
		}
	}
	return 0;
}

int Finder::find_ID_Product(vector<Product>& temp, int& out)
{
	int id = 0;

	print("Input id product:");
	if (input_id(id)) { return 1; }




	auto result = find_if(temp.begin(), temp.end(), [id](Product& iter)
		{
			return iter.get_ID_product() == id;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}

int Finder::find_Name_Product(vector<Product>& temp, int& out)
{
	string Name;

	print("Input First Name:");
	Name = input_str();


	auto result = find_if(temp.begin(), temp.end(), [Name](Product& iter)
		{
			return iter.get_Name() == Name;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}

int Finder::find_Price_Product(vector<Product>& temp, int& out)
{
	double Price;

	print("Input Price:");
	if (input_double(Price)) { return 0; }


	auto result = find_if(temp.begin(), temp.end(), [Price](Product& iter)
		{
			return iter.get_Price() == Price;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}




///
///		SALE
///


int Finder::find_ID_Sale(vector<Sale>& temp, int& out)
{
	int idE = 0, idP = 0;

	print("Input id employee:");
	if (input_id(idE)) { return 1; }

	print("Input id product:");
	if (input_id(idP)) { return 1; }


	auto result = find_if(temp.begin(), temp.end(), [idE, idP](Sale& iter)
		{
			return iter.get_ID_product() == idP && iter.get_ID_employee() == idE;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}

int Finder::find_Date_Sale(vector<Sale>& temp, int& out)
{
	string date;

	input_date(date);


	auto result = find_if(temp.begin(), temp.end(), [date](Sale& iter)
		{
			return iter.get_Date_sale() == date;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}

int Finder::find_Type_Sale(vector<Sale>& temp, int& out)
{
	string type;

	print("Input type of payment : ");
	type = input_str();

	auto result = find_if(temp.begin(), temp.end(), [type](Sale& iter)
		{
			return iter.get_Type_payment() == type;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}





//Поиск ид Продукта по ид Сотрудника в Проданых товарах
//									вектор элементов, вектор найденых ид Продуктов, вектор индексов найденых объектов, ид по которому идет поик
int Finder::find_idP_by_idE_Sale(vector<Sale>& temp, vector<int>& idP, vector<int>& index, int idE)
{
	for (int i = 0; i < temp.size(); i++) {
		if (temp[i].get_ID_employee() == idE) {
			idP.push_back(temp[i].get_ID_product());
			index.push_back(i);
		}
	}
	return 0;
}

int Finder::find_idE_by_idP_Sale(vector<Sale>& temp, vector<int>& idE, vector<int>& index, int idP)
{
	for (int i = 0; i < temp.size(); i++) {
		if (temp[i].get_ID_product() == idP) {
			idE.push_back(temp[i].get_ID_employee());
			index.push_back(i);
		}
	}
	return 0;
}












int Finder::find_max_id_Employee(vector<Employee>& temp)
{
	int out = 0;

	for (int i = 0; i < temp.size(); i++) {
		if (temp[i].get_ID_employee() > out) {
			out = temp[i].get_ID_employee();

		}
	}

	return out;
}

int Finder::find_max_id_Product(vector<Product>& temp)
{
	int out = 0;

	for (int i = 0; i < temp.size(); i++) {
		if (temp[i].get_ID_product() > out) {
			out = temp[i].get_ID_product();
		}
	}

	return out;
}
