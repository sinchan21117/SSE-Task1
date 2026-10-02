#include<iostream>
using namespace std;

int reversearrayt(int arr[], int sz){
    int start=0;
    int end=sz-1;

    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[]= { 5, 6, 7, 8 ,9, 10};
    int sz= 6;
    reversearrayt(arr, sz);

    for(int i=0; i<sz; i++){
        cout << arr[i] << " ";
    }
    return 0;
}