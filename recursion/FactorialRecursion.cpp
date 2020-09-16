#include <iostream>
using namespace std;

//O(N), O(N)
int fact(int n)
{

    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}

int Ifact(int n)
{

    int f = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int r = Ifact(5);
    printf("%d", r);
}