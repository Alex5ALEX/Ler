#include "Reporter.h"

void Reporter::report_text()
{
	string out;

	out += format("\n{:*^30}\n", "REPORT-MENU") + "\n";

	out += format("{:-^30}\n", "Select Report?") + "\n";
	out += format("{:^5} - {:.20}\n", "1", "Data Report") + "\n";
	out += format("{:^5} - {:.20}\n", "2", "Product Report") + "\n";
	out += format("{:^5} - {:.20}\n", "3", "Employee Report") + "\n";

	out += format("{:^5} - {:.20}\n", "Q", "Exit") + "\n";

	out += format("{:*<30}\n", "");

	print(out);
}



void Reporter::report(Data& data)
{
	system("cls");

	char control = 'q';

	bool LOOP = 1;
	while (LOOP) {

		report_text();

		control = input_char();

		switch (control)
		{
		case '1':
			report_data(data);
			break;

		case '2':
			report_Product(data);
			break;

		case '3':
			report_Employee(data);
			break;

		case 'Q':
		case 'q':
			LOOP = 0;
			break;

		default:
			break;
		}
	}
}




void Reporter::report_data(Data& data)
{
	system("cls");

	string out;

	out += format("{:_^30}\n", "REPORT");


	out += format("{:<30}\n", "На данный момент в системе :");
	out += format("{:<20}:{:<10}\n", "Сотрудников", data.temp_Employee.size());
	out += format("{:<20}:{:<10}\n", "Товаров", data.temp_Product.size());
	out += format("{:<20}:{:<10}\n", "Проданых товаров", data.temp_Sale.size());

	//РАБОТНИКИК
	out += format("{:_^30}\n", "");

	out += format("{:<30}\n", "Сотрудники :");

	for (int i = 0; i < data.temp_Employee.size(); i++) {
		out += format("{:<} {:<}\n", data.temp_Employee[i].get_First_name(), data.temp_Employee[i].get_Last_name());
	}



	out += format("{:_^30}\n", "");
	//
	out += format("{:<30}\n", "Товары :");
	for (int i = 0; i < data.temp_Product.size(); i++) {
		out += format("{:<30}\n", data.temp_Product[i].get_Name());
	}

	out += format("{:_^30}\n", "");

	out += "\n\n";
	print(out);

}



void Reporter::report_Product(Data& data)
{
	system("cls");

	string out;

	vector<int> idE;
	vector<int> index_Sale;
	int index = 0;


	out += format("{:_^30}\n", "PRODUCT REPORT");

	for (int i = 0; i < data.temp_Product.size(); i++) {
		out += format("{:<}\n", data.temp_Product[i].get_Name());


		//поиск зависимостей через participation
		idE.clear();
		index_Sale.clear();

		finder.find_idE_by_idP_Sale(data.temp_Sale, idE, index_Sale, data.temp_Product[i].get_ID_product());



		for (int j = 0; j < idE.size(); j++) {
			//Проверка на существование объекта зависимости
			if (finder.find_id_Employee(data.temp_Employee, index, idE[j])) { continue; }


			out += format("\t>{:<} {:<} {:<}\n",data.temp_Sale[index_Sale[j]].get_Date_sale(), data.temp_Employee[index].get_First_name(), data.temp_Employee[index].get_Last_name());
		}

	}

	out += "\n\n";

	print(out);
}



void Reporter::report_Employee(Data& data)
{
	system("cls");

	string out;

	vector<int> idP;
	vector<int> index_Sale;
	int index = 0;


	out += format("{:_^30}\n", "EMPLOYEE REPORT");

	for (int i = 0; i < data.temp_Employee.size(); i++) {
		out += format("{:<} {:<}\n", data.temp_Employee[i].get_First_name(), data.temp_Employee[i].get_Last_name());


		//поиск зависимостей через participation
		idP.clear();
		index_Sale.clear();

		finder.find_idP_by_idE_Sale(data.temp_Sale, idP, index_Sale, data.temp_Employee[i].get_ID_employee());



		for (int j = 0; j < idP.size(); j++) {
			//Проверка на существование объекта зависимости
			if (finder.find_id_Product(data.temp_Product, index, idP[j])) { continue; }


			out += format("\t>{:<10} {:<30}\n", data.temp_Sale[index_Sale[j]].get_Date_sale(), data.temp_Product[index].get_Name());
		}

	}

	out += "\n\n";

	print(out);
}
