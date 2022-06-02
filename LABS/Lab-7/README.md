# Lab Exercise
There are four files used in this project:
- Balanced.cpp -- the main program. You will modify the code in this file only.
- StackType.cpp and StackType.h -- the array implementation of the stack is from the C++ Plus Data Structures textbook.
- ItemType.h -- contains the definitions of MAX_ITEMS and ItemType.

Your primary tasks for this exercise are:

1. Fix the bug which occurs when there are open parenthesis but no corresponding closing parenthesis.
2. Create exception handling so that no errors occur when the stack is full.

You should find a couple incorrect results as you try the test plan cases. This is because there were problems with the algorithm. Correct these problems one at a time

1. Program does not recognize that opening parenthesis without matching closing paranthesis is NOT a well-formed expression.
For example, test case # 5: 
        
     ( x ( x [ ] x
To fix this problem, you will have to set balanced to false if the stack is not empty at the end of the expression.

Program exits with "Debug Error" message box.
For example, test case # 7: 

    ( x ( ( ( ( ( (
To fix this, you will have to use exception handling to "catch" the "FullStack" exception.  Information for this can be found on the lab page.

Once these problems are fixed, try the test plan cases

    ()	 	 
    ((	 	 
    ({[]})	 	 
    ([)]	 	 
    (([]	 	 
    ()]	 	 
    ((((((((