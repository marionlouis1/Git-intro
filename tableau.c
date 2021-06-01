#include <stdio.h>

int main ()
{
    int t[50], n=0, i;

    for (i = 0; i < 100; i++) 
    {
        if (i %2 == 0) {
            t[n] = i ; 
            printf("%d\n", t[n]);
            n = n+1;
        }

        return 0;
    }
}