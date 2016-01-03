#include "Person.h"
#include <string>
#include "Resource.h"
#include <memory>

class Employee :
	public Person
{
private:
	int workExperience;
	std::shared_ptr<Resource> empResource;

public:
	Employee(std::string first,
		std::string last,
		int experience);
	~Employee(void);

	void AddResource();

	//no copy constructor

	//no operator = 
};
