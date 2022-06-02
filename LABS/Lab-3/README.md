# Lab Exercise
There are two parts to this lab exercise. In the first part, you create two function templates. In the second part, you create a class template.

## Part 1--Function Templates

swapper.cpp contains a "swapper" function that will swap two integer values
Your primary tasks for this exercise are:

- Create a function template which will swap two values of any type.
- Create a function template which will print any two values passed to it.
Steps include:

1. Convert the function "swapper" (from swapper.cpp) into a templated function.
Try and use it for swapping integers. Build and Run the executable.
2. Now, create another templated function which will print any two values passed to it. You can name it "printem".
3. Add a call to "printem" before and after the call to your swap routine (replacing the current "cout" statements). Build and Run the executable.
4. Add variable pairs of different types so that your program can handle
     - int
    - char
     - double
5. Include "swapper" and "printem" calls to ensure that these functions are working for these types as well. Build and Run the executable. Your output should look something like the following:

        First Value is: 3 Second Value is: 48
        AFTER SWAP
        First Value is: 48 Second Value is: 3

        First Value is: 5.5 Second Value is: 8.5
        AFTER SWAP
        First Value is: 8.5 Second Value is: 5.5

        First Value is: a Second Value is: b
        AFTER SWAP
        First Value is: b Second Value is: a

## Part 2--Class Templates

swapperclass.cpp contains a class and implementation for swapping two integer values
Your primary task for this exercise is:

Create a class template which will swap two values of any type and print them.
Steps include:

1. Implement your code in three files: swapperclass.cpp, swapperclass.h, main.cpp.
The purpose for this is to see the problem that occurs when using templates. 

You will need to add the following to the bottom of swapperclass.cpp:

        template class my_class <int>;
        template class my_class <char>;
        template class my_class <double>;

You may also want to change the .replit configuration to

        run = "g++ main.cpp swapperclass.cpp -o output; ./output"
        

2. Your class should be capable of initializing two data members
3. Your class should have a function for swapping the two data members.
4. Your class should also have a function for printing the two data members.
5. Try different types so that your program can handle
  - int
  - char
- double

Your output may look similar to the output from Part 1.

In total five files:
- README.md
- swapper.cpp
- swapperclass.cpp
- swapperclass.h
- main.cpp