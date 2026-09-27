// print of odd no from 1 to 10 by while loop.
#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int oddsum = 0;
    int i = 1;

    while(i<=n){
        if(i%2!=0){
            oddsum+=i;
        }
        i++;

    }
    cout << "oddsum =" << oddsum;
return 0;
}