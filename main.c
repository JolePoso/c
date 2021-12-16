#include <stdio.h>
#include <stdlib.h>


int main ()
{
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);

    int z=x*y;
    int a=x+y;
    int b=x-y;
    int c=x/y;
    int d=x%y;

    printf("mozenje %d\n", z);
    printf("zbrajanje %d\n", a);
    printf("oduzimanje %d\n", b);
    printf("dijeljenje %d\n", c);
    printf("ostatak cjelobrojnog dijeljenja %d\n", d);
}
