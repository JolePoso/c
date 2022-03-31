#include <stdio.h>

main(){

    int sum=0, i=10, n;
    while(i){
        scanf("%d", &n);
        sum+=n;
        i--;
    }
    printf("Ukupno: %d\n", sum);
    printf("Prosjecno: %f", (float)sum/10);







}
