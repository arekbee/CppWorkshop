#include <string>
#include "Resource.h"
#include <iostream>

using namespace std;

Resource::Resource(std::string name): resourceName(name)
{
	cout << "constructing Resource: " << GetName() << endl;
}

Resource::~Resource()
{
	cout << "destructing Resource: " << GetName() << endl;
}