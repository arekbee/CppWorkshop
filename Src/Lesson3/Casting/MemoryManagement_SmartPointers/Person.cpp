

#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(string first,string last) : firstname(first),lastname(last)
{
	//cout << "constructing Person" << GetName() << endl;
}

Person::~Person()
{
	//cout << "destructing Person" << GetName() << endl;
}

string Person::GetName()
{
	return firstname + " " + lastname;
}

void Person::SetFirstName( string name)
{
	firstname = name;
}


//Person::Person(const Person& p) : firstname(first),lastname(last)
//{
//	cout << "constructing " << GetName() << endl;
//}