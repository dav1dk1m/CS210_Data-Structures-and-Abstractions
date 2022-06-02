# Lab Exercise

## Compile the library

To compile a timer static library:

1. type into the console:

        g++ -c timer.cpp -o timer.o

2. then type:

        ar rcs timerlib.a timer.o

3.  lastly, when you compile files, use the library, not the cpp:

        g++ complexity.cpp timerlib.a 
	
    	./a.out

## Part 1 - Search Routines

There are three files used in this program:

- search.h contains the implementation of a set of searching routines.
- sort.h contains the implementation of a set of sorting routines (used to sort the array so that binary search will work).
- timesrch.cpp — the main program. Outputs the runtime of the three searching routines.

Your primary tasks for this exercise are:

1. Compile these files along with the timer library you made in the lab
2. Compare the execution times of the three searching routines.
3. Fill in the worksheet

remember to update the .replit configuration file:

        language = "c++"

	    run = "g++ timesrch.cpp timerlib.a -o output; ./output"

## Part 2 - Sort Routines
You will plot and analyse the execution times of three sorting routines.

Extract all of the files. There are two files used in this program:
1. sort.h contains the implementation of a set of sorting routines (including selectionSort(), quickSort(), and unknownSort())
2. timesort.cpp — the main program. Outputs the runtime of the three sorting routines.

Your primary tasks for this exercise are:

1. Compile these files along with the timer library you made in the lab
2. Compare the execution times of the three sorting routines.
3. Fill in the worksheet