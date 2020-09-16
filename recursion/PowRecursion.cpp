#include <iostream>
using namespace std;

//O(N), O(N)
int pow(int m, int n)
{

    if (n == 0)
        return 1;
    return m * pow(m, n - 1);
}

int pow1(int m, int n){
    if (n == 0)
        return 1;

    if(n % 2 == 0){
        return pow1(m*m, n/2) ;
    }else{
        return m * pow1(m*m, (n-1)/2) ;
    }

}

//O(N), O(1)
int pow2(int m, int n){

    int i ;
    int f = m ;
    for(i=1; i<n; i++){
        f*=m ;
    }
    return f ;
}


int main()
{
    int r = pow2(3, 4) ;
    printf("%d", r);
}