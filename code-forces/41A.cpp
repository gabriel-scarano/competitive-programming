#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main ()
{   char s1[101], s2[101];
    int len, i, achou = 0;

    scanf("%s %s", s1, s2);

    if ((len = strlen(s1)) != strlen(s2))
    {   printf("NO");
    }
    else
    {
        i = 0;
        do 
        {   if (s1[i] != s2[len-1-i])
                achou = 1;
            
            i++;
        } while (i < len && achou == 0);

        if (achou == 0)
            printf("YES");
        else
            printf("NO");
    }

    return 0;
}