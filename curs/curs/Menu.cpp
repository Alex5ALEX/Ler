#include "Menu.h"



string Menu::text_main_Menu() {
	string out;

	out += format("{:*^30}\n", "MENU");

	out += format("\n{:-^30}\n\n", "What do you want to edit?");

	out += format("{:*^30}\n", "");

	out += format("{:^5} - {:25}\n", "1",		"Emloyee");
	out += format("{:^5} - {:25}\n", "2",		"Product");
	out += format("{:^5} - {:25}\n", "3",		"Sale");

	out += format("{:-^30}\n", "");

	out += format("{:^5} - {:25}\n", "4",		"Report");
	out += format("{:^5} - {:25}\n", "5",		"Save all");
	out += format("{:^5} - {:25}\n", "Q",		"Exit");

	out += format("{:*<30}\n", "");


	return out;
}



string Menu::text_sub_Menu(string temp) {
	string out;

	out += format("{:*^30}\n", temp + " Menu") + "\n";

	out += format("{:-^30}\n", "What do you want to do?") + "\n";

	out += format("{:*<30}\n", "");

	out += format("{:^5} - {:25}\n", "1", "Create " + temp);
	out += format("{:^5} - {:25}\n", "2", "Delete " + temp);
	out += format("{:^5} - {:25}\n", "3", "Edit " + temp);
	out += format("{:^5} - {:25}\n", "4", "Print " + temp);
	out += format("{:^5} - {:25}\n", "5", "Print list of " + temp);

	out += format("{:-^30}\n", "");

	out += format("{:^5} - {:25}\n", "6", "Sort " + temp);
	out += format("{:^5} - {:25}\n", "7", "Save " + temp);
	out += format("{:^5} - {:.20}\n", "Q", "Exit");

	out += format("{:*<30}\n", "");

	return out;
}







int Menu::main_Menu() {

	filler.fill_File_Employee(data.temp_Employee);
	filler.fill_File_Product(data.temp_Product);
	filler.fill_File_Sale(data.temp_Sale);



	bool LOOP = 1;
	char controller = 'q';

	while (LOOP)
	{

		print(text_main_Menu());

		controller = input_char();

		system("cls");

		switch (controller)
		{
		case '1':
			sub_Menu_Employee();
			break;

		case '2':
			sub_Menu_Product();
			break;

		case '3':
			sub_Menu_Sale();
			break;

		case '4':
			reporter.report(data);
			break;


		case '5':
			printer.print_File_Employee(data.temp_Employee);
			printer.print_File_Product(data.temp_Product);
			printer.print_File_Sale(data.temp_Sale);
			break;

		case 'q':
		case 'Q':
			LOOP = 0;
			break;
		default:
			break;
		}
	
	}

	return 0;
}




int Menu::sub_Menu_Employee()
{
	bool LOOP = 1;
	char controller = 'q';


	while (LOOP)
	{
		print(text_sub_Menu("Employee"));

		controller = input_char();

		system("cls");

		switch (controller)
		{
			//create
		case '1':
			filler.input_Employee(data.temp_Employee);
			break;

			//Delete 
		case '2':
			deleter.del_Employee(data.temp_Employee);
			break;

			//Edit
		case '3':
			editer.edit_Employee(data.temp_Employee);
			break;

			//Print
		case '4':
			printer.print_select_Employee(data.temp_Employee);
			break;

			//Print list
		case '5':
			printer.print_Vec_Employee(data.temp_Employee);
			break;

		case '6'://Sort
			sorter.sort_Employee(data.temp_Employee);
			break;
		
		case '7'://Save
			printer.print_File_Employee(data.temp_Employee);
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

	return 0;
}



int Menu::sub_Menu_Product()
{
	bool LOOP = 1;
	char controller = 'q';


	while (LOOP)
	{
		print(text_sub_Menu("Product"));

		controller = input_char();

		system("cls");

		switch (controller)
		{
			//create
		case '1':
			filler.input_Product(data.temp_Product);
			break;

			//Delete 
		case '2':
			deleter.del_Product(data.temp_Product);
			break;

			//Edit
		case '3':
			editer.edit_Product(data.temp_Product);
			break;

			//Print
		case '4':
			printer.print_select_Product(data.temp_Product);
			break;

			//Print list
		case '5':
			printer.print_Vec_Product(data.temp_Product);
			break;

		case '6'://Sort
			sorter.sort_Product(data.temp_Product);
			break;
		
		case '7'://Save
			printer.print_File_Product(data.temp_Product);
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

	return 0;
}



int Menu::sub_Menu_Sale()
{
	bool LOOP = 1;
	char controller = 'q';


	while (LOOP)
	{
		print(text_sub_Menu("Sale"));

		controller = input_char();

		system("cls");

		switch (controller)
		{
			//create
		case '1':
			filler.input_Sale(data.temp_Sale);
			break;

			//Delete 
		case '2':
			deleter.del_Sale(data.temp_Sale);
			break;

			//Edit
		case '3':
			editer.edit_Sale(data.temp_Sale);
			break;

			//Print
		case '4':
			printer.print_select_Sale(data.temp_Sale);
			break;

			//Print list
		case '5':
			printer.print_Vec_Sale(data.temp_Sale);
			break;

		case '6'://Sort
			sorter.sort_Sale(data.temp_Sale);
			break;	
		
		case '7'://Save
			printer.print_File_Sale(data.temp_Sale);
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

	return 0;
}

