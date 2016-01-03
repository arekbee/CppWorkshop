#include "person.h"
#include <string>

class Employee :
	public Person
{
private:
	int workExperience;

public:
	Employee(std::string first,
		std::string last,
		int experience);
	~Employee(void);
};
