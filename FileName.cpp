#include <iostream>
#include "Flat.h"
using namespace std;



int main()
{
	Flat lol = { 10, 100 };
	Flat t1 = { 50,200 };
	Flat t2 = { 50,300 };
	cout << (t1 == t2) << endl;
	cout << (t1 > t2) << endl;
	t2 = lol;
	cout << (t1 == t2) << endl;
	cout << (t1 > t2) << endl;
	return 0;
}