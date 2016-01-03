#include <iostream>
#include "Employee.h"
#include "Resource.h"

using namespace std;

int main (int argc, char *argv[])
{
	Employee e("Adam","C", 4);
	e.AddResource();
	//e.AddResource();


	//cout << "Changing name to Bob" << endl; 
	//e.SetFirstName("Bob");
	//e.AddResource();


	Employee e2 =e;


	e = e2; //what with no operator = 


	cout << "end" << endl;

	return 0;
}

