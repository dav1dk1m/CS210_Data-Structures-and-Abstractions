Part 1 – Performance of Searching Routines
The following questions are taken from A laboratory Course in C++ Data Structures, by Roberge, Brandle and Whittington:

Step 2: Complete the following table by recording the Time per Search of the linearSearch(), binarySearch(), and unknownSearch() routines for each of the values of numKeys listed in the table.

| Routine | 1000| 2000  | 3000 | 4000 | 
| ---     | ----|----   | ---  | ---  |
| linearSearch() O(n) |   8.600e-07|1.779e-06   |   2.583e-06|4.857e-06 |
| binarySearch() O(logN) |8.762e-08  |9.714e-08   |1.012e-07  |1.509e-07   |
| unknownSearch() O()|1.689e-06     |3.329e-06   |4.877e-06   |8.999e-06   |


Step 3: Plot the results into a graph similar to examplegraph.png using a program or drawing it by hand and scanning/taking a picture and upload it to Replit.

**Ans:** Uploaded it to Replit as PDF file

Step 4: Consider the two routines in the table above with known big O execution times. Which one should run faster? Describe the expected shape of the curve( straight or curved) for both algorithms.

> **Ans:** binarySeach would run faster. linearSearch curve is straight becasue it is increasing faster, making line straight while binarySearch is in curved because it is making cureved line, increasing slowly.

Step 5: Using the code in the file search.h and your measured execution times as a basis, what is the execution time (Big O) of the unknownSearch() routine.  Briefly explain your reasoning behind this estimate.

> **Ans:** Using the code in the file search.h and measured execution times as a basis, the Big O of the unknownSearch() is about O(2n)= O(n). Because the graph shows that it is linear shape and comparing from linearSearch we can calcualte 3.329e-06/1.779e-06 = 2.0, 4.877e-06/2.583e-06 = 2.0 and so on.