#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{   int n, k, i;

    scanf("%d %d", &n, &k);

    for (i = 0; i < k; i++)
    {   if (n % 10 == 0)
            n /= 10;
        else
            n -= 1;
    }

    printf("%d", n);

    return 0;
}