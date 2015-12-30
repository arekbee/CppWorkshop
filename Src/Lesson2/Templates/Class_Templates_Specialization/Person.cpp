
#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(string first,string last) : firstname(first),lastname(last)
{
}


Person::~Person() {}

string Person::GetName()
{
	return firstname + " " + lastname;
}

