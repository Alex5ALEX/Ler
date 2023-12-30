#pragma once
#include <iostream>
#include <string>
#include <regex>


using namespace std;

void print(string);

char input_char();



bool input_id(int&);

bool handle_int(string&, int&);



bool input_double(double&);

bool handle_double(string&, double&);



bool input_telephone(string&);

bool input_date(string&);

bool handle_date(string&, int&, int&, int&);

string input_str();
