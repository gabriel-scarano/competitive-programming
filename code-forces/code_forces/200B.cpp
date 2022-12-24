#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{   int n, i, p;
    double media = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {   scanf("%d", &p);
        media += p;
    }

    media /= n;

    printf("%.12lf", media);

    return 0;
}