#include <iostream>
using namespace std;

//O(N), O(N)
int pow(int m, int n)
{

    if (n == 0)
        return 1;
    return m * pow(m, n - 1);
}

int main()
{
    int r = pow(2, 3) ;
    printf("%d", r);
}