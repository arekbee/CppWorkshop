﻿
#include <string>
#ifndef _Person_H
#define _Person_H
class Person
{
private:
	std::string firstname;
	std::string lastname;
	int arbitrarynumber;

public:
	Person(std::string first,
		std::string last);
	~Person();
	std::string GetName();
	bool operator<(Person& p);
	friend bool operator<(int i, Person& p);
};
#endif