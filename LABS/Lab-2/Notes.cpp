Operator Overloading
+
-
= 
>>
<<

Why to use it? It is more intuitive

for (i=0; i<MAXARRAY; i++)
    array3[i] = array1[i] + array2[i]

array3 = array1 + array2;

keyword: operator<<

class myarray
{
    friend myarray operator+(myarray array1, myarray array2)
};

myarray operator+(myarray array1, myarray array2)
{
    myarray temparray;
    for (int i = 0; i<MAXARRAY; i++)
        temparray.value[i]=array1.value[i] + array2.value[i];
    return temparray;
}

int main ()
{
    // add
    array3 = array1 + array2;
// array3 = operator+(array1,array2);
}


Another way to do it is as a member function:

class myarray
{

    myarray operator+(myarray array2)
    {
        for (int i = 0; i<MAXARRAY; i++)
            temparray.value[i]=value[i] + array2.value[i];
        return temparray;
    }
}

int main ()
{
    array3 = array1 + array2;
    // Rewritten by the compiler as:
    // array3=array1.operator+(array2);
}
How to know when to use what?

Non-menber functions:
When the left-hand side is not an object:
    2+b

Member functions:
Assignments =
Class member access ->
Subscripting []
Function call ()

For submitting the Lab two zip files you have until 10:20PM
Submitt both zip file in UR Courses and replit.
Do not forget to document with line comments.

