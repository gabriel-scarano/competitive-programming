#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{   long long int n;

    scanf("%llu", &n);

    if (n % 2 == 1)
        printf("%lld", -((n+1)/2));
    else
        printf("%lld", n/2);

    return 0;
}