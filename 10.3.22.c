#include <stdio.h>
#include <math.h>
main () {

    char x;
    float a;
    float O;
    float P;
    printf("Unesi slovo O za opseg ili slovo P za povr�inu\n");
    scanf("%d", &x);
    printf("Unesi du�inu stranice trokuta\n");
    scanf("%d", &a);
    switch(x){
        case 'O': case'o'
        O=3*a
        printf("Opseg je %.2f", O);
        break;
        case'P':case'p'
        P=(pow(a,2)*sqrt(3))/4;
        break;
        default:
            printf("krivi znak\n");

    }
}
