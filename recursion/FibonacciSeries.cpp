#include <iostream>
using namespace std;

int fibRecursive(int n){

    if(n < 2) return n ;
    return fibRecursive(n-2) + fibRecursive(n-1) ;
}

int main(){

    printf("%d", fibRecursive(4));

}