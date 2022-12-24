#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{   int n, h, v;
    int i, count = 0;

    scanf("%d %d", &n, &h);

    for (i = 0; i < n; i++)
    {   scanf("%d", &v);

        if (v > h)
            count += 2;
        else
            count++;
    }

    printf("%d", count);

    return 0;
}