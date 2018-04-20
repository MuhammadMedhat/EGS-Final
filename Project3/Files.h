#pragma once
#include "person.h"
#include "minister.h"
#include "admin.h"
#include "citizen.h"
#include "employee.h"
#include "department.h"
#include "fstream"
#include "sstream"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Files
{
public:
	Files(void);
	void write_citizen(citizen);
	vector<citizen> read_citizen();
	void write_employee(employee);
	vector<employee> read_employee();
};

