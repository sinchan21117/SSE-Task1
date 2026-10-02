// find smallest and largest element in an array

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int num[] = {2,4,56,-5, -45, 67};
    int size = 6;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    for( int i=0; i<size; i++){
        if(num[i] < smallest){
            smallest = num[i];
        }
        if(num[i] > largest){
            largest = num[i];
        }
    }


    cout << "Smallest element: " << smallest << endl;
    cout << "Largest element: " << largest << endl;
    return 0;


}
