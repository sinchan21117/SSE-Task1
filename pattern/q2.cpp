// to print inveryted triangular pattern in terms of character

#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0;i<n;i++){
      
        for(int j=0; j<i; j++){
            cout << " ";
        }
     
        char ch = 'A'+i;
        for( int k=0; k<n-i; k++){

        cout << ch;
        }
       cout << endl;
    }
     



    return 0;
}