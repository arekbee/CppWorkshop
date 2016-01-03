#include <iostream>
#include "Person.h"

using namespace std;




int main (int argc, char *argv[])
{
	int a  =3; 
	cout << "a is " << a << endl; 

	int *b = &a; //pointer
	*b  = 4;
	cout << "a is " << a << endl;

	int& c = a; //reference
	c = 5;
	cout << "a is " << a << endl;




	//consts
	Person p("Arek", "B");

	const Person cP = p;
	//cP.SetName("Aro");
	cout << cP.GetName() << endl;



	int i = 100;

	const int * const_i = &i; // pointer to a conts
	//*const_i  = 4;
	const_i = &a;


	int * const i_const  = &i; // const pointer
	*i_const = 19;
	cout << "i is " << i << endl; //19



	const int * const const_i_const = &i; //const pointer to a const 


	return 0;
}

