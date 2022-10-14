#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{   unsigned long long int n, count = 0;

    scanf("%llu", &n);

    while (n != 0)
    {   if (n % 10 == 4 || n % 10 == 7)
            count++;
        
        n /= 10;
    }

    if (count == 4 || count == 7)
        printf("YES");
    else
        printf("NO");

    return 0;
}