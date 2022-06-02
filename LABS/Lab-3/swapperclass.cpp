// Name: DongYun Kim  
// Student Number: 200405213  
// Date: 02-03-2022
// File: swapperclass.cpp

#include "swapperclass.h"

/*
General form:
template <typename Ttype>
return_type Class_name<Ttype>::Function_name
*/

//Defining member function for class template
template <typename T>

my_class<T>::my_class(T a, T b) 
{
	x = a;
	y = b;
}

//Defining member function templates. Swap two values of any types.
template <typename T>
void my_class<T>::swapper()
{
	T TempVal = x;
	x = y;
	y = TempVal;
} 

//Defining member function templates. print values of any types.
template <typename T>
void my_class<T>::printem(){	
	cout << "First value is: " << x << " Second value is: " << y << endl;
}

template class my_class <int>;
template class my_class <char>;
template class my_class <double>;

