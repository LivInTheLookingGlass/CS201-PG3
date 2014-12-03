//Gabe Appleton, CS201
//This is the main reference file for the linklist class

#ifndef _LL_
#define _LL_

#include <iostream>
#include <string>
#include <cstdlib>
#include "LLN.h"
using namespace std;

class LLN;
class LL 
{
private:
	LLN *head;
public:
	LL();
	~LL();
	void print();
	void addInOrder(string s);
	void flail(string s);
	long getCounts();
	void printIfCount(long i);
	void deleteAll();
};

#endif
