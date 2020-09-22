#include <iostream>
using namespace std;

/*
How many multiplication here?
e^x = 1 + x/1 + x*x/1*2 + x*x*x/1*2*3 + x*x*x*x/1*2*3*4
      0    0      2         4               6
                 2(1)      2(2)            2(3) ...
                 2*n(n+1)/2 = O(n^2)
*/
double e(int x, int n)
{
    static double p = 1, f = 1;

    if (n == 0)
        return 1;

    double r = e(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}

int main(){

    printf("%1f \n", e(1, 10)) ;
}