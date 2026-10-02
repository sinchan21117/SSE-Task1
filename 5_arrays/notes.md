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

Array indexing starts from 0 to (size-1)
Forexample: int arr[5] = {10, 20, 30, 40, 50};

The indexes are:
Index:    0   1   2   3   4
Value:   10  20  30  40  50

So:
arr[0] = 10
arr[1] = 20
arr[2] = 30
arr[3] = 40
arr[4] = 50

### Updating an Array Element

We can change the value of an element using its index.
int arr[5] = {10, 20, 30, 40, 50};
arr[2] = 100;

Now the array becomes: 10  20  100  40  50

#### PASS BY REFERENCE

Pass by Reference mein hum function ko variable ki actual memory location/reference dete hain.
Iska matlab:Function ke andar kiya gaya change original variable ko bhi change kar deta hai.

##### LINEAR RESEARCH ALGORITHM

Linear Search is a simple searching algorithm used to find a particular element in an array.
It checks each element of the array one by one from the beginning until:
1.the required element is found, or
2.the complete array is checked.

Algorithm
1.Start from the first element of the array.
2.Compare the current element with the key.
3.If both are equal, the element is found.
4.Otherwise, move to the next element.
5.Repeat until the element is found or the array ends.
6.If the complete array is checked and the element is not found, return -1.

##### REVERSE AN ARRAY

Reversing an array means changing the order of its elements so that the last element becomes the first and the first element becomes the last.
Example
Original Array: arr = {10, 20, 30, 40, 50}
Reversed Array: arr = {50, 40, 30, 20, 10}

Approach: We can reverse an array using the two-pointer approach.

We use two variables:
start = 0
end = size - 1

Then:
Swap the elements at start and end.
Increase start.
Decrease end.
Continue until start < end becomes false.

###### VECTOR ALGORITHM

A Vector is a dynamic array in C++. Unlike a normal array, the size of a vector can increase or decrease dynamically during program execution.
Vectors are part of the STL (Standard Template Library).
To use a vector, we include:

Syntax:
1.vector< int> vec;

Here:
vector → Data structure
< int>  → Data type
vec    → Vector name

Example:
vector< int> marks;
This creates an empty vector of integers.

2.Creating a Vector with Values
We can directly initialize a vector with values:
vector< int> vec = {10, 20, 30, 40, 50};
The vector contains: 10 20 30 40 50

3.vector< int>vec(3,0)
3 -> represents the size of vector
0 -> represents the respective values of index means all are same value in index

There is a special type of loop name as for each loop
syntax: for(int i: vec)
where, int i represents the index stored value
       vec represents the name of vector.

There are imp vector functions
1.push_back()-Adds an element at the end of the vector.

v.push_back(10);
v.push_back(20);
Vector:10 20

2.pop_back()-Removes the last element of the vector.

v.pop_back();

Before:10 20 30
After:10 20

3.size()-Returns the number of elements currently present in the vector.
cout << v.size();

4.capacity()-Returns the amount of storage currently allocated by the vector.
cout << v.capacity();
Remember:size <= capacity

5.front()-Returns the first element of the vector.
cout << v.front();

6.back()-Returns the last element of the vector.
cout << v.back();

7.at()-Accesses an element at a particular index with bounds checking.
cout << v.at(2);