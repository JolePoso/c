#include <stdio.h>

main(){
    int n=7;
    if(n<5||n>4) printf("17");
    if(n>4||n>3) printf("%d",n);
    if(++n>12&&--n>4) printf("12");
    printf("%d",n);
}
