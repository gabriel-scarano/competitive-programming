#include <iostream>
#include <stdio.h>

using namespace std;

int verifica_dig_dif (int n);

int main ()
{   int n;

    scanf("%d", &n);

    do
    {   n++;
    } while (!verifica_dig_dif(n));

    printf("%d", n);

    return 0;
}

int verifica_dig_dif (int n)
{   int num[10] = { 0 }, i;

    for (i = 0; i < 4; i++)
    {   num[n % 10]++;
        n /= 10;
    }

    for (i = 0; i < 10; i++)
        if (num[i] > 1)
            return 0;

    return 1;
}