Part 1 – Performance of Sorting Routines
The following questions are taken from A laboratory Course in C++ Data Structures, by Roberge, Brandle and Whittington:

Step 2: Complete the following table by recording the Time per Sort of the selectionSort(), quickSort(), and unknownSort() routines for each of the values of numKeys listed in the table.

| Routine | 1000| 2000  | 3000 | 4000 | 
| ---     | ----|----   | ---  | ---  |
|selectionSort() O(n^2) |   1.490e-03   | 6.565e-03   |1.435e-02   |2.718e-02   |
|quickSort() O(nlogN) |6.513e-05  |2.402e-04    |4.389e-04  |6.088e-04   |
| unknownSort() O()|3.716e-03     |1.534e-02     |3.699e-02   |6.470e-02   |

Step 3: Plot the results into a graph similar to examplegraph.png using a program or drawing it by hand and scanning/taking a picture and upload it to Replit.

**Ans:** Uploaded it to Replit as PDF file

Step 4: Consider the two routines in the table above with known big O execution times. Which one should run faster? Describe the expected shape of the curve (straight or curved) for both algorithms 

> **Ans:** quickSort would run faster. selectionSort and quickSort both expected shape of curved curve. selectionSort is parabolic in shape and quicksort start off with a small graph and eventually grows faster over time.


Step 5: Using the code in the file sort.h and your measured execution times as a basis, what is the execution time(Big O) of the unknownSort() routine.  Briefly explain your reasoning behind this estimate.

> **Ans:** Using the code in the file sort.h and your measured execution times as a basis, Big O of unknownSort() is about O(2.4n^2)= O(n^2) because it has one nested for loop (inner loop and outer loop) just like selectionSort. Additonally, selectionSort and unknowSort has very similar graph shape. 
unknownSort/selectionSort = Big O of unknownSort<br><br>
3.716e-03/1.490e-03 = 2.5<br>
1.534e-02/6.565e-03 = 2.3<br>
3.699e-02/1.435e-02 = 2.5<br>
6.470e-02/2.718e-02 = 2.4<br><br>
average = 2.4