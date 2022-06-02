// Name: DongYun Kim  
// Student Number: 200405213  
// Date: 02-28-2022

//--------------------------------------------------------------------
// STL List Exercise
// file: main.cpp
//
// Reads a list of student names, sorts the list according to a key, and
// prints the sorted list.
//
//	Modified by: Alex Clarke -- November 5, 2014
//  Modified by: Catherine Song -- October 30, 2015 
//--------------------------------------------------------------------



#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

struct DataType 
{
	string lastname;	// Student's Last Name
	string firstname;	// Student's First Name

	string getKey () const
	{ return lastname; }   // Returns the key field
};

//---------Need to add code to overload operator <<
ostream& operator << (ostream& os, const DataType& myData)
  {
    os << myData.firstname << " " << myData.lastname <<endl;
    return os;
  }
 
//------- Need to add code to fix error C2784: 'bool __cdecl std::operator <

bool operator < (DataType lhs, DataType rhs)
{
 return lhs.getKey() < rhs.getKey();
}

int main() 
{
	ifstream studentFile ("input.txt");  // Student file
	list <DataType> students;            // Students
	DataType currStudent;              // One Student (has firstname,lastname)


	// Read each line from input.txt:
    //Store the firstname and the lastname into 
    //the temporary student structure "currStudent".
  while(studentFile >> currStudent.firstname >> currStudent.lastname)
  {
	  // Push the current student into the list ("students") 
    students.push_back(currStudent);
  }
  
	// Use an iterator to print the unsorted list of students.
  list<DataType>::iterator p = students.begin();
  while(p != students.end())
  {
    cout << (*p).firstname << " " << (*p).lastname << endl;
    p++;
  }

  cout << "Sorting........" << endl;

	// Sort the list of students.
  students.sort();

	// Use an iterator to print the sorted list of students.
  p = students.begin();
  while(p != students.end())
  {
    cout << (*p).firstname << " " << (*p).lastname << endl;
    p++;
  }  

return 0;
}


