6. inverted triangular pattern

1111
 222 -> is form me      (logic -. space + number)
  33
   4

// example -> to print the upper pattern

#include<iostream>
using namespace std;

int main(){
    int n=4;

    for(int i=0; i<n; i++){
        // spaces wala loop
        for(int j=0; j<i; j++){
            cout<< " ";
        }

       // numbs wala loop
       for(int j=0; j<n-i; j++){
        cout<< (i+1);
       }

      cout<< endl;


    }
    
    

    return 0;
}