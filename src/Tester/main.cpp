#include <stdio.h>
#include "RSDll.h"
#include <iostream>
int main() 
{
	//call method from library 
	int rs = add(10, 20);
	std::cout <<"Add Method From Library:" << rs << std::endl;

	//call method from class obj

	LBClass obj;
	rs=obj.Sub(20, 10);
	std::cout <<"Sub Method From Class Object:" << rs << std::endl;

	return 0;
}