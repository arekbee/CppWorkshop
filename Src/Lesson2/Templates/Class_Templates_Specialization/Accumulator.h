#include "Person.h"
using namespace std;

template <class T>
class Accumulator
{
private: 
	T total;
public:
	Accumulator(T start): total(start) {};

	T operator+=(const T& t)
	{
		return total = total + t;
	};

	T GetTotal() {return total;}
};



template <>
class Accumulator<Person> //req. def. of Accumulator<T>
{
private: 
	string total;
	bool added;
public:
	Accumulator(string start): total(start) {};



	string operator+=(Person& t)
	{
		if(!added) {
			added = true;
			return total = total +  t.GetName();
		}
		return total = total + ", " +  t.GetName();
	};

	string GetTotal() {return total;}
};
