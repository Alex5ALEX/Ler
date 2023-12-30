#pragma once
#include <string>
#include <format>

#include "Data.h"

#include "Printer.h"
#include "Filler.h"
#include "Finder.h"
#include "Deleter.h"
#include "Editer.h"
#include "Reporter.h"
#include "Sorter.h"

#include "Message.h"


using namespace std;

class Menu
{
private:
	Data data;

private:
	Printer printer;
	Filler filler;
	Finder finder;
	Deleter deleter;
	Editer editer;
	Reporter reporter;
	Sorter sorter;


///	MAIN_MENU
private:
	string text_main_Menu();
	string text_sub_Menu(string);

public:
	int main_Menu();


public:
	int sub_Menu_Employee();
	int sub_Menu_Product();
	int sub_Menu_Sale();

};

