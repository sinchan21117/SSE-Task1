// MIN OF TWO NUMBERS 

#include <iostream>
using namespace std;

// function defination
int min( int a, int b){  // parameters that we give the input 
    if(a<b){
        return a;
    }else{
        return b;
    }

}



int main(){
   cout << "min=" << min(10,5);  // arguments that we assign the values
    return 0;
}