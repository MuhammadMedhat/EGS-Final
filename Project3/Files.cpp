#include "Files.h"

Files::Files(void)
{
}
void Files::write_citizen(citizen citizenObject)
{
	fstream infile;
	infile.open("citizenFile.txt",ios::in|ios::out|ios::app);
	string record;
	static int count=1;
	int val=count;

	char delimiter=01;

	record=citizenObject.get_Firstname()+delimiter;
	record+=citizenObject.get_LastName()+delimiter;
	record+=citizenObject.get_id()+delimiter;
	record+=citizenObject.get_password()+delimiter;
	ostringstream ss;
	ss<<val;
	string ID_Citizen=ss.str();
	record+=ID_Citizen+'\n';

	if (infile.fail())exit(1);
	else infile<<record;
	infile.close();
	count++;
}
vector<citizen> Files::read_citizen()
{
	fstream outfile;
	outfile.open("citizenFile.txt",ios::in|ios::out);
	vector<citizen> AllCitizen;
	citizen citizenObject;
	string record;
	char delimiter=01;

	if (outfile.is_open())
  {
	  while ( !outfile.eof() )
    {
      getline (outfile,record);
	  string CurrentSubString;
	  for (int i=0;i<record.size();i++)
	  {
		  if (record[i]!=delimiter&&record[i]!='\n')CurrentSubString+=record[i];
		  else {
			  if (i==0)
			  citizenObject.set_FirstName(CurrentSubString);
			  else if (i==1)
				  citizenObject.set_LastName(CurrentSubString);
			  else if (i==2)
				  citizenObject.set_password(CurrentSubString);
			  else if (i==3){
				  int val=stoi(CurrentSubString);
				  citizenObject.set_primaryKey(val);}   
			  CurrentSubString.clear();
		  }
	  }
	  AllCitizen.push_back(citizenObject);
	  record.clear();
    }
  
  }
	else exit(1);
	outfile.close();
	return AllCitizen;
}
void Files::write_employee(employee employeeObject)
{

	fstream infile;
	infile.open("employeeFile",ios::in|ios::out|ios::app);
	string record;
    char delimiter=01;
	static int count=1;
	int val=count;


	record=employeeObject.get_Firstname()+delimiter;
	record+=employeeObject.get_LastName()+delimiter;
	record+=employeeObject.get_id()+delimiter;
	record+=employeeObject.get_password()+delimiter;
	record+=employeeObject.get_gender()+delimiter;
	record+=employeeObject.get_age()+delimiter;
	record+=employeeObject.get_salary()+delimiter;


	ostringstream ss;
	ss<<val;
	string ID_Citizen=ss.str();
	record+=ID_Citizen+'\n';

	if (infile.fail())exit(1);
	else infile<<record;
	count++;
}

