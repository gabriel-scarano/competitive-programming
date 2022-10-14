#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{   int x, s = 5, p = 0;

    scanf("%d", &x);

    while (x % s != 0)
    {   p += x/s;
        x -= (x/s) * s;
        s--;
    }

    p += x / s;

    printf("%d", p);

    

    return 0;
}