// CALCULATE THE DECIMAL NUMBER FROM BINARY NUMBER

#include <iostream>
using namespace std;

int bintodec(int binnum){
    int ans = 0, pow = 1;
    while(binnum > 0){
        int rem = binnum % 10;
        binnum /= 10;
        ans += rem * pow;
        pow *= 2;
    }
    return ans;
}

int main(){
    
        cout << bintodec(101) << endl;
    
    return 0;
}

    