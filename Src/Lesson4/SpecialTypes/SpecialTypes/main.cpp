#include <iostream>
#include <vector>
using namespace std;



int main (int argc, char *argv[])
{


	std::vector<int> v;
	v.push_back(3);
	v.push_back(9);
	v.push_back(27);

	//iterator
	for	(auto i = v.begin(); i!= v.end(); i++)
	 	cout << *i << " ";

	cout << endl;
	for(auto i = v.rbegin(); i != v.rend(); i++)
	 	cout << *i << " ";

	cout << endl;

	return 0;
}

