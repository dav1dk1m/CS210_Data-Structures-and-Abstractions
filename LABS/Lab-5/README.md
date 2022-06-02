

There are two files used in this program:
- listrec.h contains the implementation of the linked list class
- recursion.cpp -- the main program. This contains the calls to test the linked list member functions. Including the recursive ones.


# Part 1 - Answer the following questions
Although, it is not explicitly stated, what is the base case for writeSub()?
> ** ANS: ** When p==0, if this is false then writeSub() will be called then the action "prints in reverse" happens  

What is the base case for insertEndSub()?

> ** ANS: **  Base case for insertEndSub() is when p == 0.

If you wanted to print the list backwards, how would you modify writeSub()? Why?

>  ** ANS: **

	if ( p != 0 )
	{
    writeSub(p->next);// Continue with next node
    
    	cout << p->dataItem;   // Output data item
   
      }


# Part 2

Try to run this program. You should get the prompt:

    Enter a list of characters :

Now, type "abc" and enter. You will get the following output:

    Enter a list of characters : abc
    a b [c]
    List : abc
    List : abc!
    a b c [!]

Now, modify the writeSub() function (in the listrec.h file) so that it prints in reverse.  Run your program, you should get the following output

    Enter a list of characters : abc
    a b [c]
    List : cba
    List : !cba
    a b c [!]

Next, create a new recursive function that will insert the character 'a' immediately before each occurence of the character 'b'. The cursor will not change.
Add code in the listrec.h file for aBeforeb() and aBeforebSub(). The function prototypes exist, you have to add code to get them running.

Your output will look like this:

    Enter a list of characters : abc
    a b [c]
    List : cba
    List : !cba
    a a b c [!]

Test to make sure your program works if the b is at the beginning, middle, end, and if there are multiple bs