#include <iostream>
#include "Accumulator.h"
using namespace std;

int main (int argc, char *argv[])
{
	Accumulator<int> integers(0);
	integers += 3;
	integers += 7;
	cout << "Total of 3 and 7 is " <<integers.GetTotal() << endl;

	Accumulator<string> strings("");
	strings += "blabla1";
	strings += " blabla2";
	cout << "Total of 2 string is " << strings.GetTotal() << endl;


	return 0;
}

