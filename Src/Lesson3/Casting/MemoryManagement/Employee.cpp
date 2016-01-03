
#include "Employee.h"
#include <iostream>


Employee::Employee(std::string first,
		std::string last,
		int experience): Person(first,last),
							workExperience(experience)
{
	std::cout << "constructing Employee (" << GetName() << " age:" <<
		workExperience << " year's) " << std::endl;
}


Employee::~Employee(void)
{
	std::cout << "destructing Employee (" << GetName() << " age:" <<
		workExperience << " year's) " << std::endl;

}

