# Lab Exercise
There are six files used in this program:
- hashtbl.cpp and hashtble.h -- contain the implementation of the hashtable class
- listlnk.cpp and listlnk.h -- contain the implementation of linked lists class
- login.cpp -- the main program. This contains the Password structure, which is inserted into the hashtable.
- password.dat -- contains all the users and corresponding passwords.

Your primary tasks for this exercise are to edit the login.cpp to add in lines so that it does the following:

1. insert passwords into the Hash Table
2. retrieve one user's Password structure from the Hash Table
3. check to see if the user is in the table and compare retrieved user password to input password, print "Authentication failure" or "Authentication successful"

Try to run this program. You should find that it will prompt you for "Login:" and "Password:" (type in random words at these prompts). You will notice that it continuely cycles around asking you for this information.

To stop the program from running, at the "Login:" prompt, type CTRL and z (simultaneously) and then the Enter key .

Add in a line to insert passwords into the table. Hint: notice that the name of the hashtable is passwords and that you want to insert a Password structure called tempPass into the hashtable.

Add in a line to print out the hash table. Hint: the hashtable is passwords and there is a member function called showStructure.

Run this program. If all is working well, you should get some output that looks like this


    The Hash Table has the following entries
    0: _

    1: mary

    2: _

    3: _

    4: _

    5: bopeep

    6: _

    7: jill

    8: _

    9: jack

    Login:


Add lines to compare the true password to the input password and print "Authentication failure" or "Authentication successful". Hint: Compare the input password (pass) to the password within the tempPass object (which has been retrieved).

Run your program. You should get results like the following

    Login: mary
    Password: contrary
    Authentication successful

    Login: jim 
    Password: contrary
    Authentication failure

    Login: bopeep
    Password: sheeplost
    Authentication failure