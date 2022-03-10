#include <stdio.h>

main() {

    int a;
    int b;

    printf("Unesi prvi broj\n");
    scanf("%d", &a);

    printf("Unesi drugi broj\n");
    scanf("%d", &b);

    if(a>b){
        printf("Broj %d je veci od broja %d", a, b);
    }
    else {
        printf("Broj %d je veci od broja %d", b, a);
    }
}
