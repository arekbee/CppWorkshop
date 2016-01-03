

#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(string first,string last) : firstname(first),lastname(last)
{
	cout << "constructing " << GetName() << endl;
}

Person::~Person()
{
	cout << "destructing " << GetName() << endl;
}

string Person::GetName()
{
	return firstname + " " + lastname;
}
