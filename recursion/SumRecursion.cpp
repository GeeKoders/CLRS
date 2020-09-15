#include <iostream>
using namespace std;

//O(N), O(1)
int Isum(int n)
{
    int s = 0;
    int i;
    for (int i = 1; i <= n; i++)
    {
        s = s + i;
        
    }
    return s;
}

//O(N), O(N)
int sum(int n)
{

    if (n == 0)
        return 0;
    return sum(n - 1) + n;
}

int main()
{

    int r;
    r = Isum(5);
    printf("%d ", r);
}