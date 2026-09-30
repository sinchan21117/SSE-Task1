// CALCULATE nCR BINOMIAL COEFFICIENT FOR N AND R.

#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
    // return (n==1 ? 1 : factorial(n-1)*n);
}

int nCr( int n , int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n/(fact_r * fact_nmr);    

}


int main(){
    cout << factorial(5) << endl;
}
