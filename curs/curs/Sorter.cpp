#include "Sorter.h"

void Sorter::text_sort_Employee()
{
	string out;

	out += format("\n{:*<30}\n", "") + "\n";
	out += format("{:-^30}\n", "Choise sort option") + "\n";

	out += format("{:^5} - {:.20}\n", "1", "ID") + "\n";
	out += format("{:^5} - {:.20}\n", "2", "First name") + "\n";
	out += format("{:^5} - {:.20}\n", "3", "Last name") + "\n";
	out += format("{:^5} - {:.20}\n", "4", "Post") + "\n";
	out += format("{:^5} - {:.20}\n", "5", "Phone number") + "\n";

	out += format("{:*<30}\n", "");

	print(out);
}

void Sorter::text_sort_Product()
{
	string out;

	out += format("\n{:*<30}\n", "") + "\n";
	out += format("{:-^30}\n", "Choise sort option?") + "\n";

	out += format("{:^5} - {:.20}\n", "1", "ID") + "\n";
	out += format("{:^5} - {:.20}\n", "2", "Name") + "\n";
	out += format("{:^5} - {:.20}\n", "3", "Price") + "\n";

	out += format("{:*<30}\n", "");

	print(out);
}

void Sorter::text_sort_Sale()
{
	string out;

	out += format("\n{:*<30}\n", "") + "\n";
	out += format("{:-^30}\n", "Choise sort option?") + "\n";

	out += format("{:^5} - {:.20}\n", "1", "ID Employee") + "\n";
	out += format("{:^5} - {:.20}\n", "2", "ID Product") + "\n";
	out += format("{:^5} - {:.20}\n", "3", "Date sale") + "\n";
	out += format("{:^5} - {:.20}\n", "4", "Type payment") + "\n";

	out += format("{:*<30}\n", "");

	print(out);
}






void Sorter::sort_Employee(vector<Employee>& temp)
{
	text_sort_Employee ();

	char control = input_char();


	switch (control)
	{
	case '1':
		sort(temp.begin(), temp.end(), [](Employee& a, Employee& b) {return a.get_ID_employee() < b.get_ID_employee(); });
		break;

	case '2':
		sort(temp.begin(), temp.end(), [](Employee& a, Employee& b) {return a.get_First_name() < b.get_First_name(); });
		break;

	case '3':
		sort(temp.begin(), temp.end(), [](Employee& a, Employee& b) {return a.get_Last_name() < b.get_Last_name(); });
		break;

	case '4':
		sort(temp.begin(), temp.end(), [](Employee& a, Employee& b) {return a.get_Post() < b.get_Post(); });
		break;

	case '5':
		sort(temp.begin(), temp.end(), [](Employee& a, Employee& b) {return a.get_Phone_number() < b.get_Phone_number(); });
		break;

	default:
		break;
	}
}

void Sorter::sort_Product(vector<Product>& temp)
{
	text_sort_Product();

	char control = input_char();


	switch (control)
	{
	case '1':
		sort(temp.begin(), temp.end(), [](Product& a, Product& b) {return a.get_ID_product() < b.get_ID_product(); });
		break;

	case '2':
		sort(temp.begin(), temp.end(), [](Product& a, Product& b) {return a.get_Name() < b.get_Name(); });
		break;

	case '3':
		sort(temp.begin(), temp.end(), [](Product& a, Product& b) {return a.get_Price() < b.get_Price(); });
		break;

	default:
		break;
	}
}


void Sorter::sort_Sale(vector<Sale>& temp)
{
	text_sort_Sale();

	char control = input_char();


	switch (control)
	{
	case '1':
		sort(temp.begin(), temp.end(), [](Sale& a, Sale& b) {return a.get_ID_employee() < b.get_ID_employee(); });
		break;

	case '2':
		sort(temp.begin(), temp.end(), [](Sale& a, Sale& b) {return a.get_ID_product() < b.get_ID_product(); });
		break;

	case '3':
		sort(temp.begin(), temp.end(), [](Sale& a, Sale& b) {
			int d, m, y;
			int d1, m1, y1;
			string s = a.get_Date_sale();
			string s1 = b.get_Date_sale();

			handle_date(s, d, m, y);
			handle_date(s1, d1, m1, y1);


			if (y < y1) {
				return 1;
			}
			else if (y > y1) {
				return 0;
			}

			else if (m < m1) {
				return 1;
			}
			else if (m > m1) {
				return 0;
			}

			else if (d < d1) {
				return 1;
			}
			else if (d > d1) {
				return 0;
			}

			return 0;
			});
		break;

	case '4':
		sort(temp.begin(), temp.end(), [](Sale& a, Sale& b) {return a.get_Type_payment() < b.get_Type_payment(); });
		break;

	default:
		break;
	}
}
