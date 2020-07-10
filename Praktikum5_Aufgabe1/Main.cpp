/*
Author: Kat Bergen
v01 30.06.2020

main to call the exercises, in which objects in the heap are created, a pointer points to them and they are printed. The object is thereafter deleted and the pointer dropped.

PAD 1 P5A1
*/

#include <exception>
#include <iostream>
#include "Functions.h"


int main() try
{	
	exerciseA();
	exerciseB();
	exerciseC(); 
	exerciseD();
	
	return 0;
}
catch (const std::exception& e)
{
	std::cerr << e.what();
	return -1;
}
catch (...)
{
	std::cerr << "unknown error";
	return -2;
}