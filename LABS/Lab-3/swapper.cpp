// Name: DongYun Kim  
// Student Number: 200405213  
// Date: 02-03-2022
// File: swapper.cpp

/*************************
program: swap two integers
**************************/

//Your primary tasks for this exercise are:

//Create a function template which will swap two values of any type.
//Create a function template which will print any two values passed to it.

#include <iostream>
using namespace std;


//Function template which will swap two values of any type.
template <typename T>
void swapper (T & x, T & y);

//Function template which will print first and second value of any type.
template <typename T>
void printem (T x, T y);

int main()
{
	int myx=3, myy=4;

  printem (myx, myy); //print before swap integers
  swapper (myx, myy); //swap two values 
  cout << "AFTER SWAP" << endl;
	printem (myx, myy); //print after swap integers
  cout << endl;

  double a=5.5, b = 8.5;

  printem (a, b); //print before swap double values
  swapper (a, b); //swap two values 
  cout << "AFTER SWAP" << endl;
	printem (a, b); //print after swap double values
  cout << endl;

  char c='a', d='b';

  printem (c, d); //print before swap characters 
  swapper (c, d); //swap two values 
  cout << "AFTER SWAP" << endl;
	printem (c, d); //print after swap characters
  cout << endl;

	return 0;
}

//Change to function template that swaps two values of any type
template <typename T>
void swapper (T & x, T & y)
{
		T TempVal = x;
		x = y;
		y = TempVal;
}

//Function template that print first and second values
template <typename T>
void printem (T x, T y)
{
  cout << "First Value is: " << x <<" " << "Second Value is: " << y << endl;
}