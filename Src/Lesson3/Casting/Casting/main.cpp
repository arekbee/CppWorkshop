#include <iostream>
#include "Person.h"
#include "Employee.h"

using namespace std;

int main (int argc, char *argv[])
{

	Employee e("Arek", "B",2);
	Person* p = &e;
	//Employee* e2 = (Person*)p;
	//cout << e2->GetName() << endl;




	//int i = 123;
	//Employee* e3 = (Person*)&i;
	//cout << e3->GetName() << endl;


	//Employee* e2_staticCast = static_cast<Person*>(p);
	//cout << e2_staticCast->GetName() << endl;


	//Employee* e3_dynamicCast = dynamic_cast<Person*>&i;
	//if(e3_dynamicCast){
	//	cout << e3_dynamicCast->GetName() << endl;
	//}else{
	//	cout << "Can't be cast to Employee"  << endl;
	//}

	return 0;
}

