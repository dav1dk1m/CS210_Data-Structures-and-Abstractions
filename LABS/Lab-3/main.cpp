// Name: DongYun Kim  
// Student Number: 200405213  
// Date: 02-03-2022
// File: main.cpp

#include "swapperclass.h"

int main()
{
	my_class <int> temp(3, 4); //take 2 integers
	temp.printem(); //print first and second value before swap
	temp.swapper (); //swap 2 values
	cout << "AFTER SWAP" << endl;
	temp.printem(); //print 2 values after swap
  cout<<endl;

  my_class <double> temp2(5.5, 8.8); //take 2 double values
	temp2.printem(); //print first and second value before swap
	temp2.swapper ();//swap 2 values
	cout << "AFTER SWAP" << endl;
	temp2.printem(); //print 2 values after swap
  cout<<endl;

  my_class <char> temp3('a', 'b'); //take 2 characters
	temp3.printem(); //print first and second value before swap
	temp3.swapper (); //swap 2 values
	cout << "AFTER SWAP" << endl; 
	temp3.printem(); //print 2 values after swap
}

