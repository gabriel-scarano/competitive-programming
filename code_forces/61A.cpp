#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{   char n1[101], n2[101];
    int i;

    scanf("%s %s", n1, n2);

    i = 0;
    while (n1[i] != '\0')
    {   if ((n1[i] == '1' && n2[i] == '1') || (n1[i] == '0' && n2[i] == '0'))
            printf("0");
        else
            printf("1");

        i++;        
    }

    return 0;
}