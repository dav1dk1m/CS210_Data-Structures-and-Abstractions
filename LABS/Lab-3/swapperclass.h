// Name: DongYun Kim  
// Student Number: 200405213  
// Date: 02-03-2022
// File: swapperclass.h

#ifndef swapperclass_h
#define swapperclass_h

#include <iostream>
using namespace std;

//Implement a class template 
template <typename T>
// change all 'int' to 'T'
class my_class
{
	T x;
	T y;
public:
	my_class(T a, T b);
	void swapper();
	void printem();
};

#endif