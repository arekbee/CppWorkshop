#include <iostream>
using namespace std;



template <class T>
T max(T& t1, T& t2)
{
	return t1 < t2 ? t2 : t1;
}


int main (int argc, char *argv[])
{
	int max1 =  max(33,44);
	cout << "max of 33 and 44 is " << max1  <<  endl;


	double max2 = max(33.9, 40.0);
	cout << "max of 33.9 and 40.0 is " << max2 << endl;



	double max3 = max<double>(33.9, 44);
	cout << "max of 33.0 and 44.0 is " << max3 << endl;



	string s1 = "Number";
	string s2 = "number";
	string maxString = max(s1,s2); 
	cout << "max of text: " << s1 << " and text: " << s2  <<" is " << maxString << endl;



	return 0;
}

