#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{   int k, n, w, i, p = 0;

    scanf("%d %d %d", &k, &n, &w);

    for (i = 1; i <= w; i++)
        p += i * k;

    if (p <= n)
        printf("0");
    else
        printf("%d", p - n);

    return 0;
}