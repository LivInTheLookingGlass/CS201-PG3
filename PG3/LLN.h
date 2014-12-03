//Gabe Appleton, CS201
//This is the main reference file for the linklist node class

#ifndef _LLN_
#define _LLN_

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class LLN
{
private:
	string t;
	long count;
	LLN *next;

public:
	LLN(string s, LLN * n);
	~LLN();
	void print();
	LLN * getNext();
	void setNext(LLN *n);
	long getCount();
	void addInOrder(string s);
	void increment();
	string getText();
	long getCounts();
	void printIfCount(long i);
	void deleteAll();
};

#endif
