
#include "Employee.h"
#include <iostream>
#include "Resource.h"
#include "Person.h"
#include <memory>

using namespace std;

Employee::Employee(std::string first,
		std::string last,
		int experience): Person(first,last),
							workExperience(experience)
							//empResource(nullptr) no need to initial. with nullptr
{
	std::cout << "constructing Employee (" << GetName() << " workEx:" <<
		workExperience << " year's) " << std::endl;
}


Employee::~Employee(void) 
{
	//no delete empResource;

	std::cout << "destructing Employee (" << GetName() << " workEx:" <<
		workExperience << " year's) " << std::endl;

	

}

void Employee::AddResource()
{
	empResource.reset();

	empResource = std::make_shared<Resource>("[ Special resource for " + GetName() + " ]");	
}





