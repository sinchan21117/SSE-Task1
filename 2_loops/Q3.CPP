// check whether if a number is prime or not.

#include<iostream>
using namespace std;

int main(){
    int n = 13;
    bool isprime = true;

    for(int i=2;i<=n-1;i++){ //hamne 1 or 13 is liye nhi liya kyoki wo toh unke table me aate hi hai or prime no bas 1 ke table me aur apne table me aata hai.
        if( n%i==0)
        isprime = false;
        break;

    }
    if(isprime = true){
        cout<< "prime";
    }else{
        cout<< "non prime";
    }


return 0;
}


