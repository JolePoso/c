#include <stdio.h>
#include <math.h>

int main(){
    int a;
    int b;
    int c;
    int d;

    printf("Unesi troznamenkasti broj:\n");
    scanf("%d", &a);

    int b=a/100;
    int c=a/10 - b*10;
    int d=a%10;

    if(a==pow(b, 3) + pow(c, 3) + pow(d, 3))
        printf("To je armstrongov broj");
            else
                printf("To nije armstrogov broj");



}
