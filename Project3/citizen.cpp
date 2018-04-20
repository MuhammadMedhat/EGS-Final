#include "citizen.h"



citizen::citizen()
{
}


citizen::~citizen()
{
}



void citizen::set_age(int a) { age = a; }
void citizen::set_gender(string s) { gender = s; }
void citizen::set_password(string s) { password = s; }
void citizen::set_primaryKey(int i){primaryKey=i;}


int citizen::get_age() { return age; }
string citizen::get_gender() { return gender; }
string citizen::get_password() { return  password; }
int citizen::get_primaryKey(){return primaryKey;}


void citizen::sign_up(string fs,string ls,string nat_id,string pas,string igender,int iage)
{
	//TODO

	set_FirstName(fs);
	set_LastName(ls);
	set_id(nat_id);
	set_gender(igender);
	set_age(iage);
}
