# c++ basics 

1. cpp is a general purposprograming language . it is used to develop software , games,
applications and many other programes.

2. basic of c++ program

#include<iostream>   // used for input and output
using namespace std;  // allow us to use standard liberary names directly

int main(){                // main function where program execution starts
    cout<<"hello world";   // used to display output
    retutn 0;              // indicates successsfull completion of the program
}

3. variables

 variable is a named memory location used to store data

 BASIC DATA TYPES 
 1.int - stores whole numbers ( 4 bytes)
 2.char - stores a single charater (1bytes)
 3.bool - stores true oe false (1 bytes)
 4.float - stores decimal numbers ( 4 bytes)
 5.double - stores precise decimal numbers (8 bytes)

 4. operators 
 Operators are special symbols used to perform operations on variables and values.

 The main types of operators in C++ are:

1.Arithmetic Operators -> (+,-,*,%,/)
2.Relational Operators -> used to compare two values and the result is either true or false
  (==, !=, >, <, >=, <=)
3.Logical Operators -> or(||)-> print 1 when atleast one condition is true
                    -> and(&&)-> print 1 when both condition is true
                    -> not(!)-> it reverse the result
4.Assignment Operators -> Assignment operators are used to assign or update values in variables.
  ex- a+=5 it means a=a+5 similarly withe all
5.Increment and Decrement Operators -> These operators increase or decrease a value by 1.
  There are four forms:

  a++;   // Post-increment
  ++a;   // Pre-increment
  a--;   // Post-decrement
  --a;   // Pre-decrement

5. input and output

1.output-> cout is used to display output on the screen.
 
  syntax: cout<< "message";

2.input-> cin is used to take input from the user

  syntax: cin >> variable;

6. conditional statements

  Conditional statements are used to make decisions in a program based on a condition.

  1.if and else

  syntax: if(condition){
              // code
          }else{
              //code
          }

  ternary syntax: condition? stt1 : strr2;
