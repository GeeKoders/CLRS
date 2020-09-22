#include <iostream>
using namespace std;


double e(int x, int n){

    static double s ;

    for(; n>0; n--){
        s = 1 + x*s/n  ;
    }

    return s ;
}



int main(){
    printf("%1f \n", e(2, 10)) ;
}