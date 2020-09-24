#include<iostream>
using namespace std;

/*
    A->B A->C B->C
       (3, 1, 2, 3)
       /    \       \
      /      \       \ 
(2, 1, 3, 2)  (1, 3) (2, 2, 1, 3)  
....................

n=3 15 calls = 1+2+2^2+2^3 = 2^(3+1)-1 = O(2^n)
n=2  7 calls 

move = 2^n - 1 
*/
void TOH(int n, int A, int B, int C){

    if(n>0){
        TOH(n-1, A, C, B) ;
        printf("from %d to %d \n", A, C) ;
        TOH(n-1, B, A, C) ;
    }

}

int main(){
    TOH(3, 1, 2, 3) ;
}
