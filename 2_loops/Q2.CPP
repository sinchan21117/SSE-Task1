// SUM OF ALL ODD NUMBERS FROM 1 TO N BY FOR LOOP.

#include<iostream>
using namespace std;

int main(){
    int n = 50;
    int oddsum = 0;

    for(int i=1; i<=n; i++){
        if(i%2!=0){ 
            oddsum += i; 
        }
            
        
    }
     cout<< "oddsum :" << oddsum;

return 0;
}