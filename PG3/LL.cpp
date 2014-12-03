//Gabe Appleton, CS201
//This is the main file for the linklist class

#include <string>
#include <iostream>
#include <cstdlib>
#include "LL.h"
#include "LLN.h"
using namespace std;

//constructor
LL::LL()
{
	head = NULL;
}

//destructor
LL::~LL()
{
	delete head;
}

//prints the list
void LL::print()
{
	if (head)
		head->print();
}

//adds a node in alphabetical order
void LL::addInOrder(string s)
{
	if (!head)
		flail(s);					//Phrased as such for comedic effect
	else if (head->getText() > s)
		flail(s);
	else
		head->addInOrder(s);
}

//creates a new head (phrased for comedic effect)
void LL::flail(string s)
{
	head = new LLN(s,head);
}

//gets the highest count in the list
long LL::getCounts()
{
	if (head)
		return head->getCounts();
	else
		return 0;
}

//prints nodes if their count matches i
void LL::printIfCount(long i)
{
	if (head)
		head->printIfCount(i);
}

void LL::deleteAll()
{
	if (head)
		head->deleteAll();
	delete head;
}
