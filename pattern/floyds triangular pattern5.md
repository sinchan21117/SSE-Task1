5.floyds triangular pattern

1
23 -> is form me
456
78910

// example -> to print the upper pattern

#include<iostream>
using namespace std;

int main(){
    int n=4;
    int num=1;

    for(int i=0; i<n;i++){

        for(int j=0; j<i+1; j++){
            cout<< num;
            num++;

        }
        cout << endl;
    }

    

    return 0;
}