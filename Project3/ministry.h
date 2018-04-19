#pragma once
#include <iostream>
#include <string>
#include "minister.h"
#include "department.h"
#include <vector>

using namespace std;


class ministry
{
	string name;
	minister _minster;
	vector <department> dept_vec;
	


public:
	ministry();
	~ministry();

		void set_ministry_name(string s);
		virtual void set_minister() = 0;	 //TODO

		string   get_ministry_name();
		minister get_minister();
};

