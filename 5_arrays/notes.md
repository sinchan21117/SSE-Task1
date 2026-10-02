# ARRAYS

An Array is a collection of elements of the same data type stored in contiguous memory locations.it is in linear in structures. Array ka use tab karte hain jab humein ek hi type ke multiple values ko store karna ho.

Example:
Instead of creating:
int marks1 = 90;
int marks2 = 85;
int marks3 = 92;
int marks4 = 78;

We can use:
int marks[4] = {90, 85, 92, 78};

Advantages:
1.Stores multiple values using one name.
2.Easy to access elements.
3.Easy to perform loops and operations.
4.Useful for storing large amounts of similar data.

Syntax:
data_type array_name[size];

Example: int arr[5];

Here:int → data type
     arr → array name
     5 → size of array
This creates an array that can store 5 integers.

## INDEXING IN ARRAYS

Array indexing starts from 0.

For:

int arr[5] = {10, 20, 30, 40, 50};

The indexes are:

Index:    0   1   2   3   4
Value:   10  20  30  40  50

So:

arr[0] = 10
arr[1] = 20
arr[2] = 30
arr[3] = 40
arr[4] = 50