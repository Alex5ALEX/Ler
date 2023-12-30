#pragma once
#include <format>
#include <vector>
#include <fstream>

#include "Employee.h"
#include "Product.h"
#include "Sale.h"

#include "Data.h"

#include "Message.h"

#include "Finder.h"



using namespace std;

class Reporter
{
private:
	Finder finder;

public:
	void report_text();
	
	void report(Data&);

	void report_data(Data&);
	void report_Product(Data&);
	void report_Employee(Data&);
};