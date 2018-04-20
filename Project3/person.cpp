#include "person.h"


person::person()
{


}

person::~person()
{


}


void person::set_FirstName(string s)
{
	FirstName = s;
}
string person::get_Firstname()
{
	return FirstName;
}

void person::set_LastName(string s)
{
	LastName = s;
}
string person::get_LastName()
{
	return LastName;
}



void person::set_id(string i)
{
	id = i;
}
string	person::get_id()
{
	return id;
}
