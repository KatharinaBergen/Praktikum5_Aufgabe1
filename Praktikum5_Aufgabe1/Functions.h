/*
Author: Kat Bergen
v01 30.06.2020

header in which the functions for the exercises are declared.
A for double pointer
B for int array pointer
C for int array pointer with helper function to print out the 10 items in the array
D for int array pointer with helper function to print out a flexible number of items depending on the amount of items in the array the pointer points to

PAD 1 P5A1
*/

#ifndef something
#define something

#include <ostream>
using std::ostream;
#include <iostream>

void exerciseA();
void exerciseB();

void exerciseC();
void print_array_10(ostream&, int*);

void exerciseD();
void print_array_10_forD(ostream&, int*, int);


#endif // !something
