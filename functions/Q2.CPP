// SUM OF NUMBERS FROM 1 TO N

#include <iostream>
using namespace std;

// function defination
int sumn( int n){  // parameters that we give the input 
    int sum =0;
    for(int i=1; i<=n;i++){
        sum=sum+i;
    }
    return sum;

}



int main(){
   cout << sumn(67);
    return 0;
}