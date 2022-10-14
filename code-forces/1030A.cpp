#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{   int n, r;
    int i;
    bool dif = false;

    scanf("%d", &n);

    for (i = 0; i < n && !dif; i++)
    {   scanf("%d", &r);

        if (r == 1)
            dif = true;
    }

    if (dif)
        printf("HARD");
    else
        printf("EASY");

    return 0;
}