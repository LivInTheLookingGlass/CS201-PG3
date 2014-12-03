//Gabe Appleton, CS201
//This is the main file for the linklist node class
#include "LLN.h"
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

//constructor
LLN::LLN(string s, LLN * n)
{
	t = s;
	next = n;
	count = 1;
}

//destructor
LLN::~LLN()
{
	delete next;
}

//prints the contents of a node, then the next (recursively)
void LLN::print()
{
	cout << t << "  " << count << endl;
	if (next)
		next->print();
}

//gets the next node in the list
LLN * LLN::getNext()
{
	return next;
}

//sets the next node in the list
void LLN::setNext(LLN *n)
{
	next = n;
}

//gets the count element of a node
long LLN::getCount()
{
	return count;
}

//adds a node in alphabetical order to the list
void LLN::addInOrder(string s)
{
	if (t == s)
		increment();
	else if (!next || next->getText() > s) 
		next = new LLN (s,next);
	else
		next->addInOrder (s);
}

//increases count
void LLN:: increment()
{
	count++;
}

//returns string element
string LLN::getText()
{
	return t;
}

//returns the highest count in the list
long LLN::getCounts()
{
	long i;
	if (next)
		i = next->getCounts();
	else
		i = 0;
	if (count > i)
		return count;
	else
		return i;
}

//prints if the long specified matchs count
void LLN::printIfCount(long i)
{
	if (count == i)
		cout << t << endl;
	if (next)
		next->printIfCount(i);
}

void LLN::deleteAll()
{
	if (next)
		next->deleteAll();
	delete next;
}
