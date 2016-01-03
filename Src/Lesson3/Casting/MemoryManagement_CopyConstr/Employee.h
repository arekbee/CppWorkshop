#include "Person.h"
#include <string>
#include "Resource.h"


class Employee :
	public Person
{
private:
	int workExperience;
	Resource* empResource;

public:
	Employee(std::string first,
		std::string last,
		int experience);
	~Employee(void);

	void AddResource();

		//copy constructor
	Employee(const Employee& Employee );

	Employee& operator = (const Employee& e); 
};
