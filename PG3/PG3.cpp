//Gabe Appleton, CS201
//This is the main file for the program which reads a linklist and prints the most common elements

#include "PG3.h"
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

//It's main.  What do you expect it to do?
int main()
{
	LL * l = new LL();
	getInput(l);
	int i = getCounts(l);
	printHighCount(l,i);
	system("pause");
	delete l;
	return 0;
}

//Recursively grabs input from the user
void getInput(LL * ll)
{
	cout << "Please enter a string:" << endl;
	string s;
	getline(cin,s);
	if (s != "")
	{
		ll->addInOrder(s);
		getInput(ll);
	}
}

//returns the highest count among the linklist
long getCounts(LL * ll)
{
	return ll->getCounts();
}

//prints everything with the given string in the given linklist
void printHighCount(LL * ll, long i)
{
	ll->printIfCount(i);
	cout << endl << endl;
	//ll->print();
}
