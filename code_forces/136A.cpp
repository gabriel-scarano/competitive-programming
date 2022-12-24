#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{   int n, i, p[101], g;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        p[i] = i;

    for (i = 1; i <= n; i++)
    {   scanf("%d", &g);

        p[g] = i;
    }

    for (i = 1; i <= n; i++)
        printf("%d ", p[i]);

    return 0;
}