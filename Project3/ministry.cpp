#include "ministry.h"




ministry::ministry()
{
}


ministry::~ministry()
{
}


void ministry::set_ministry_name(string s) { name = s; }


string   ministry::get_ministry_name() { return name; }
minister ministry::get_minister() { return _minster; }