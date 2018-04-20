#pragma once
#include "person.h"
class citizen :public person
{
	
	int age;
	string gender;
	string password;
	int primaryKey;

public:
	citizen();
	~citizen();

	void set_age(int a);
	void set_gender(string s);
	void set_password(string s);
	void set_primaryKey(int i);


	int get_age();
	string get_gender();
	string get_password();
	int get_primaryKey();
	void sign_up(string,string,string,string,string,int);

//TODO  have different service from all ministers (Friend functions);
	
};

