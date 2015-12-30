#include <iostream>
#include "Accumulator.h"

using namespace std;

int main (int argc, char *argv[])
{
	Accumulator<Person> people("For the party are going: "); //start string

	Person p1("Kate","A.");
	Person p2("Alice","B.");
	Person p3("Bob", "Z.");
	people += p1;
	people += p2;
	people += p3;
	cout << people.GetTotal() << endl;



	return 0;
}

