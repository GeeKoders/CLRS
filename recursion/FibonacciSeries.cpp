#include <iostream>
using namespace std;

/*
    fib(n) 0 1 1 2 3 5 8 13 21 34 
        n  0 1 2 3 4 5 6 7  8  9

    fib(n) = {
                0 if n=0 
                1 if n=1
                fib(n-2) + fib(n-1) if n > 1
             }
    draw the picture to see the time complexity
    fib(5) = 15 calls 
    fib(4) = 9 calls
    fib(3) = 5 calls
    fib(n-2) = 2fib(n-1) = O(2^n)         
*/

// O(2^n)
int fibRecursive(int n){

    if(n < 2) return n ;
    return fibRecursive(n-2) + fibRecursive(n-1) ;
}
// O(N)
int fibIterative(int n){

    static int t0 = 0, t1 = 1, s ;
    
    
    if(n < 2) return n ;
    for(int i=2; i<=n; i++){
        s = t0 + t1 ;
        t0 = t1 ;
        t1 = s ;
    }

    return s ;

}

int main(){

    // printf("%d", fibRecursive(4));
    printf("%d", fibIterative(7));
}