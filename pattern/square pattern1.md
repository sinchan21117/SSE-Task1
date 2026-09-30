 1. square pattern

    1234
    1234 > is form mr square pattern
    1234
    1234

// syntax of nested loop 

for(intialization; condition; updation){ -> outer loop

    for(   ){     -> inner loop

    }
    
}

// explanation
how many no lines to be printed tells by outerloop(1 to n times)
what to be printed on that line is tell by inner loop

//eexample: to print 1234 in 4 lines 

#include<iostream>
using namespace std;

int main(){
    
    int n = 4;

    for(int i=1; i<=n; i++){   // oiuter loop

        for(int j=1; j<=n; j++){   // inner loop    
            cout<<j<<" ";
        }
    }
    
    cout<<endl;



    return 0;
}

ans - 1234
      1234
      1234
      1234

 //example- print ABCD IN 4 LINES

 #include<iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=0; i< n;i++){
     char ch='A';
     for(int j=0; j< n;j++){
       cout<< ch;
       ch = ch +1;

     }
       cout<<endl;
    }


    return 0;
}

ans ABCD
    ABCD
    ABCD
    ABCD

