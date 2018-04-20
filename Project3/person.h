#pragma once
#include <string>
using namespace std;


class person
{

	string FirstName;
	string LastName;
	string id;

public:
	person();
	~person();

	void set_FirstName(string s);
	string get_Firstname();

	
	void set_LastName(string s);
	string get_LastName();

	void set_id(string i);
	string get_id();



};

