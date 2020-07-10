/*
Author: Kat Bergen
v01 30.06.2020

cpp in which the exercises are coded. 
A for double pointer
B for int array pointer
C for int array pointer with helper function to print out the 10 items in the array
D for int array pointer with helper function to print out a flexible number of items depending on the amount of items in the array the pointer points to

PAD 1 P5A1
*/

#include "Functions.h"

void exerciseA()
{
	double* pd1{ new double{ 9.8765 } };
	std::cout << "pointer adress: " << pd1 << " value: " << pd1[0] << std::endl;
	delete pd1; //deletes the value the pointer is pointing to
}				//leaving the Bereich, we also drop the pointer

void exerciseB()
{
	int* a{ new int[10]{1,2,3,4,5,6,7,8,9,10} };
	for (unsigned int i{ 0 }; i < 10; i++)
	{
		std::cout << a[i] << ',';
	}

	std::cout << std::endl;
	delete[] a;
}

void exerciseC()
{

	int* a{ new int[10]{1,2,3,4,5,6,7,8,9,10} };
	print_array_10(std::cout, a);
	std::cout << std::endl;
	delete[] a;
}

void print_array_10(ostream& os, int* a)
{
	
	for (unsigned int i{ 0 }; i < 10; i++)
	{
		os << "a at " << i << " is: " << a[i] << std::endl;
	}
}

void exerciseD()
{
	int length{ 10 };
	int* a{ new int[length]{1,2,3,4,5,6,7,8,9,10} };
	print_array_10_forD(std::cout, a, length);
	std::cout << std::endl;
	delete[] a;
}

void print_array_10_forD(ostream& os, int* a, int length)
 {

	for (int i{ 0 }; i < length; i++)
	{
		os << "a at " << i << " is: " << a[i] << std::endl;
	}

}
