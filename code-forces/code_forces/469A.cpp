#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{   bool p[101] = { false };
    int n, a, i, j, v;

    scanf("%d", &n);

    for (i = 0; i < 2; i++)
    {   scanf("%d", &v);
        for (j = 0; j < v; j++)
        {   scanf("%d", &a);

            if (!p[a])
                p[a] = true;
        }
    }

    i = 1;
    while (p[i] && i <= n)
        i++;

    if (i == n+1)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");
    return 0;
}