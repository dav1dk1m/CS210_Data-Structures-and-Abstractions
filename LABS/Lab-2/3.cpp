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

//the overloaded function is declared WITHIN the class here.  Notice that it only has one parameter because the second parameter is the object invoking the function
	myarray operator+(myarray array2)
	{
		myarray temparray;
		for (int i=0; i<MAXARRAY; i++)
			temparray.value[i]=value[i] + array2.value[i];
		return temparray;
	}
};

int main ()
{
   . . .
   array3=array1 + array2;
   . . .
}