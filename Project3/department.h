#pragma once
#include <string>
#include <vector>
#include "employee.h"

using namespace std;

class department
{

	string name;
	vector<employee>emp_vec; //TODO : amdin can add ppl to this list


public:
	department();
	~department();
};

