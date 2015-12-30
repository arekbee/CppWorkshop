
#include "Employee.h"
#include "Person.h"
#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
	cout << "Start of applicaions" << endl;

	Person alice("Alice", "A");

	{
		Person bob("Bob", "B");

		{
			Employee john("John","C", 3 );

		}	
	}
	cout << "End of application" << endl;

	return 0;
}

