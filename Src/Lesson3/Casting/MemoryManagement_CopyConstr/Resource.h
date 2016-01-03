
#ifndef _Resource_H
#define _Resource_H
class Resource
{
private:
	std::string resourceName;

public:
	Resource(std::string name);
	~Resource();
	std::string GetName() const {return resourceName;};
	
};
#endif
