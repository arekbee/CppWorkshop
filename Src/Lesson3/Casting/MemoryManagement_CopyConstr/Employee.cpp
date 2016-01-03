
#include "Employee.h"
#include <iostream>
#include "Resource.h"
#include "Person.h"


Employee::Employee(std::string first,
		std::string last,
		int experience): Person(first,last),
							workExperience(experience),
							empResource(nullptr)
{
	std::cout << "constructing Employee (" << GetName() << " workEx:" <<
		workExperience << " year's) " << std::endl;
}


Employee::~Employee(void)
{
	delete empResource;

	std::cout << "destructing Employee (" << GetName() << " workEx:" <<
		workExperience << " year's) " << std::endl;

	

}

void Employee::AddResource()
{
	delete empResource;
	empResource = new Resource("[ Special resource for " + GetName() + " ]");	
}


		//copy constructor
Employee::Employee(const Employee& employee ):
	Person(employee.firstname, employee.lastname),
	workExperience(employee.workExperience),
	//empResource(employee.empResource) //assinging e to e2 
	empResource(new Resource(employee.empResource->GetName()))
{

	std::cout << "constructing[copy] Employee (" << GetName() << " workEx:" <<
		workExperience << " year's) " << std::endl;
}


Employee& Employee::operator = (const Employee& e)
{
	firstname = e.firstname;
	lastname = e.firstname;
	workExperience = e.workExperience;
	empResource = new Resource(e.empResource->GetName());

	return *this; //always return *this
}




