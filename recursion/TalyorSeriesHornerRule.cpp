#include <iostream>
using namespace std;

/*
How many multiplication here?
    e^x = 1 + x/1 + x^2/1*2 + x^3/1*2*3 + x^4/1*2*3*4
        = 1 + x/1[1 + x/2 + x^2/2*3 + x^3/2*3*4]
        = 1 + x/1[1 + x/2[1 + x/3 + x^2/3*4]]
        = 1 + x/1[1 + x/2[1 + x/3[1 + x/4]]]
                1       1       1      1   O(N)    
*/
double e(int x, int n){

    static double s ;

    for(; n>0; n--){
        s = 1 + x*s/n  ;
    }

    return s ;
}

double recursive(int x, int n){
    double static s ;

    if(n==0) return s ;
    s = 1 + x*s/n  ;
    return recursive(x, n - 1) ;
}


int main(){
    // printf("%1f \n", e(2, 10)) ;
       printf("%1f \n", recursive(2, 10)) ;
}