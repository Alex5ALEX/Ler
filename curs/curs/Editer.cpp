#include "Editer.h"






void Editer::text_edit_Employee()
{
	string out;

	out += format("\n{:*<30}\n", "") + "\n";
	out += format("{:-^30}\n", "What do you want to edit?") + "\n";

	out += format("{:^5} - {:.20}\n", "1", "First name") + "\n";
	out += format("{:^5} - {:.20}\n", "2", "Last_name") + "\n";
	out += format("{:^5} - {:.20}\n", "3", "Post") + "\n";
	out += format("{:^5} - {:.20}\n", "4", "Phone number") + "\n";
	out += format("{:^5} - {:.20}\n", "Q", "Exit") + "\n";

	out += format("{:*<30}\n", "");

	print(out);
}

void Editer::text_edit_Product()
{
	string out;

	out += format("\n{:*<30}\n", "") + "\n";
	out += format("{:-^30}\n", "What do you want to edit?") + "\n";

	//out += format("{:^5} - {:.20}\n", "1", "ID event") + "\n";
	out += format("{:^5} - {:.20}\n", "1", "Name") + "\n";
	out += format("{:^5} - {:.20}\n", "2", "Price") + "\n";
	out += format("{:^5} - {:.20}\n", "Q", "Exit") + "\n";

	out += format("{:*<30}\n", "");

	print(out);
}

void Editer::text_edit_Sale()
{
	string out;

	out += format("\n{:*<30}\n", "") + "\n";
	out += format("{:-^30}\n", "What do you want to edit?") + "\n";

	out += format("{:^5} - {:.20}\n", "1", "ID employee") + "\n";
	out += format("{:^5} - {:.20}\n", "2", "ID product") + "\n";
	out += format("{:^5} - {:.20}\n", "3", "Date sale") + "\n";
	out += format("{:^5} - {:.20}\n", "4", "Type payment") + "\n";
	out += format("{:^5} - {:.20}\n", "Q", "Exit") + "\n";

	out += format("{:*<30}\n", "");

	print(out);
}






void Editer::edit_Employee(vector<Employee>& temp)
{
	int index = 0;
	if (finder.find_Employee(temp, index)) { return; };
	
	
	

	bool LOOP = 1;
	char controller = 'q';
	
	
	string stemp;
	
	while (LOOP)
	{
		system("cls");
	
	
		printer.print_Employee(temp[index]);
		text_edit_Employee();
	
	
		controller = input_char();
	
	
		switch (controller)
		{
		case '1':
			print("Input name:");
			temp[index].set_First_name(input_str());
			break;
	
	
	
		case '2':
			print("Input string:");
			temp[index].set_Last_name(input_str());
			break;
	
	
		case '3':
			print("Input string:");
			temp[index].set_Post(input_str());
			break;
	
	
		case '4':
			if (input_telephone(stemp)) {
				break;
			}
			temp[index].set_Phone_number(stemp);
			break;
	
	
	
		case 'Q':
		case 'q':
			LOOP = 0;
			break;
	
		default:
			cout << "ERROR" << endl;
			break;
		}
	}
}

void Editer::edit_Product(vector<Product>& temp)
{
	int index = 0;
	if (finder.find_Product(temp, index)) { return; };
	

	
	bool LOOP = 1;
	char controller = 'q';
	
	
	string stemp;
	double dtemp = 0;
	
	while (LOOP)
	{
		system("cls");
	
	
		printer.print_Product(temp[index]);
		text_edit_Product();
	
	
		controller = input_char();
	
	
		switch (controller)
		{
		case '1':
			print("Input string:");
			temp[index].set_Name(input_str());
			break;
	
	
	
		case '2':
			print("Input price:");
			if(input_double(dtemp)){
				break;
			}
			temp[index].set_Price(dtemp);
			break;
	
	
		case 'Q':
		case 'q':
			LOOP = 0;
			break;
	
		default:
			cout << "ERROR" << endl;
			break;
		}
	
	}
}

void Editer::edit_Sale(vector<Sale>& temp)
{
	int index = 0;
	if (finder.find_Sale(temp, index)) { return; };
	

	
	bool LOOP = 1;
	char controller = 'q';
	
	
	string stemp;
	int itemp = 0;
	double dtemp = 0;
	
	while (LOOP)
	{
		system("cls");
	

		printer.print_Sale(temp[index]);
		text_edit_Sale();
	
	
		controller = input_char();
	
	
		switch (controller)
		{
		case '1':
			print("Input ID employee:");
			if (input_id(itemp)) {
				break;
			}
			temp[index].set_ID_employee(itemp);
			break;
	
	
		case '2':
			print("Input ID product:");
			if (input_id(itemp)) {
				break;
			}
			temp[index].set_ID_product(itemp);
			break;
	
	
		case '3':
			if (input_date(stemp)) {
				break;
			}
			temp[index].set_Date_sale(stemp);
			break;
	
	
		case '4':
			print("Input Type of payment:");
			temp[index].set_Type_payment(input_str());
			break;
	
	
		case 'Q':
		case 'q':
			LOOP = 0;
			break;
	
		default:
			cout << "ERROR" << endl;
			break;
		}
	
	}
}
