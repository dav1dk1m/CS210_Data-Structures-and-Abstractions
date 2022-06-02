// Name: DongYun Kim  
// Student Number: 200405213  
// Date: 01-28-2022

//filename: arrayaddder.cpp
//Modify this program to overload subtraction operator and insertion operator

#include <iostream>
using namespace std;

#define MAXARRAY 5

class myarray 
{
private:
	int value[MAXARRAY];

public:
	void setvalue(int index, int newvalue){
		value[index]=newvalue;}
	int getvalue(int index){
		return value[index];}
	
  // the function for overloading the - operator is declared as a friend function
	friend myarray operator-(myarray array1, myarray array2);

  // print out one array per line
  friend ostream& operator<<(ostream& os, myarray array)
  {
    os << "newarray:  ";
    for(int i = 0; i < MAXARRAY; i++)
      os << array.value[i] << "   ";
      cout << endl;

    return os;
  }

  myarray operator+(myarray array2)
	{
		myarray temparray;
		for (int i=0; i<MAXARRAY; i++)
			temparray.value[i]=value[i] + array2.value[i];
		return temparray;
	}

//the operator- overloaded function is declared WITHIN the class here. Member Functions (Commented out operator overloaded as a member, follwed what instruction said)
/*  myarray operator-(myarray array2)
	{
		myarray temparray;
		for (int i=0; i<MAXARRAY; i++)
			temparray.value[i]=value[i] - array2.value[i];
		return temparray;
	}
*/  
};

//the friend function for operator- is defined outside of the myarray class. Non-member Functions. It will take two two parameters, array1 and array2
myarray operator-(myarray array1, myarray array2)
	{
		myarray temparray;
		for (int i=0; i<MAXARRAY; i++)
			temparray.value[i]=array1.value[i] - array2.value[i];
		return temparray;
  }


int main ()
{

	myarray array1, array2, array3, array4; //added array 4 so it prints out add and subtraction (just like what example run showed in the instructions)
	int i;
	
	//INITIALIZE 
	for (i=0; i<MAXARRAY; i++)
	{
		array1.setvalue(i,i);
		array2.setvalue(i,i+3);
	}
	
  array3 = array1 + array2; //ADD
  array4 = array1 - array2; //SUBTRACTION
	

	//PRINT 
	cout << "array1   array2   array3   array4" << endl;
	for (i=0; i<MAXARRAY; i++)
		{
      cout << array1.getvalue(i) << "        " 
		     << array2.getvalue(i) << "        " 
		     << array3.getvalue(i) << "        " 
         << array4.getvalue(i) << "        "<< endl;
    }


  cout << array1 << array2 << array3 << array4; //print newarray in a single line

	return 0;
}