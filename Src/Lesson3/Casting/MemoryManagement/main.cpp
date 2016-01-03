#include <iostream>
#include "Person.h"

using namespace std;



int main (int argc, char *argv[])
{

//Rule of 3


	Person* p1 = new Person("Bob","C");
	string text_p1 = p1->GetName();
	cout << "Ref 1: "<< text_p1 << endl;

	Person* p2 = p1;
	string text_p2 = p2->GetName();
	cout << "Ref 2: "<<text_p2 << endl;


	if(true) //memory leak (no destructing)
	{
		return;
	}   

	delete p1;
	cout << "Delete Ref 1" << endl;


	string text_p1_2 = p1->GetName();
	cout << "Ref 1: "<< text_p1_2 << endl;

	//p1 = nullptr; //faild bad alloc
	//string text_p1_3 = p1->GetName(); 
	//cout << "Ref 1: "<<text_p1_3 << endl;
	//delete p1;


	//delete p2; //pointer being freed was not allocated


	Person* nullPerson = nullptr;
	delete nullPerson;

	

	return 0;
}

