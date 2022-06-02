# Your primary tasks for this exercise are:

## Part 1
Complete the following tables: write out the answer in the table below

Assume that a and b are myarray objects. Specify the corresponding member and non-member prototypes for the following overloaded operator expressions. If you cannot define the prototypes in one of these ways, please specify with an N/A. The first two have been completed for you.

  Expression	  |  Defined as Member Functions  |   	Defined as Non-Member Functions|
  ---           |     ----                      | ----                                |
  | a+b	        |   myarray operator+(myarray b) |	 myarray operator+(myarray a, myarray b)| 
  | 1+a	| N/A	 |myarray operator+(int a, myarray b)
  | a+1	    	 |myarrray operator+(int b)                       |myarray operator+(myarray a, int b)                               |
  | a=b	 	      |myarray operator=(myarray b)                              |N/A                                |
  | a>b	 	      |bool operator>(myarray b)                                 |bool operator>(myarray a, myarray b)                               |
  | 10<b	      |N/A                                 |    bool operator>(int a, myarray b)                      | 	
  | cin>>a	    |N/A                                 |          istream& operator>>(istream & is, myarray & a)                        | 	 

   Specify which of the following are Member Functions and which are Non-Member Functions:

|                            |Non-Member    | Member
  |---                       | ----         | 
  |max(a,b)                  |o Yes         |x	 Not	 
  |a.printit()	             |x              |o 	 
  |int myclass::sum(void)    |x              |o	 	 
  |float min(float a, float b)|o           |x	 	 

## Part 2


1. Modify the code so that you overload the "-" operator to subtract array2 from array1:
 - First overload it as a member function in the myarray class.
 - Second overload it as a non-member function
 - Overload the "<<" (insertion operator) so that it will print the entire array on one line


 Build and run the executable file (this is just to ensure that the program is working). You should get the following output:
    
    array1   array2   array3
    0        3        3
    1        4        5
    2        5        7
    3        6        9
    4        7        11


2. Add some code in the myarray class to overload the "-" operator
3. Add some code in main (after the following line)

	array3=array1 + array2; 
to subtract array2 from array1 (and store the result in array3).

4. Build and run the executable file. You should get the following output:
 


 
    array1   array2   array3
    0        3        -3
    1        4        -3
    2        5        -3
    3        6        -3
    4        7        -3


5. Overload the "-" operator as an non-member (friend) function

6. Build and run the executable file. You should get the same output as the previous run.

7. Now, overload the "<<" (insertion operator) so that it will print one array per line.
Hints: The prototype will look like this:

    ostream& operator<<(ostream& os, myarray array)

You make use of os in lines like the following:

    os << "newarray:  ";
(this puts "newarray: " into the output stream, os)
Don't forget to:

	return os;

8. Change the calls to cout in main so that you only have a single line:


    cout << array1 << array2 << array3;

9.
Build and run the executable file. You should get output similar to the following:

    newarray:  0      1     2     3    4
    newarray:  3      4     5     6    7
    newarray:  -3    -3    -3    -3    -3