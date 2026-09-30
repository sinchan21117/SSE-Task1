2. square pattern

123
456  -> is form me square pattern
789

// example - to print upper squence

#include<iostream>
using namespace std;

int main(){
    int n=3;
    int num=1;

    for(int i=0;i<n; i++){
      
      for(int j=0; j<n; j++){

       cout << num;
       num++;

      }
       cout<<endl;
    }




    return 0;
}