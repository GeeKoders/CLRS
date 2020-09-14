#include<iostream>
using namespace std;
//O(N), O(N)
void fun(int n){

    if(n > 0){
        fun(n - 1) ;
        cout << n << endl ;
    }
}
//O(N), O(1)
void fun1(int n){

    int i = 1 ;
    while(i<=n){
        printf("%d", i) ;
        i++ ;
    }
}


int main(){
    int x = 3 ;
    // fun(x) ;
    fun1(x) ;
}