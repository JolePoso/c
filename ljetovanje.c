#include <stdio.h>

    int main () {

    int x;
    int y;

    printf("Unesi koordinate neke to�ke\n");
    scanf("%d %d", &x, &y);

    if(x>0 && y>0){
        printf("To�ka se nalazi u prvom kvadrantu\n");
    }
    if(x>0 && y<0){
        printf("To�ka se nalazi u drugom kvadrantu\n");
    }
     if(x<0 && y<0){
        printf("To�ka se nalazi u trecem kvadrantu\n");
    }
     if(x<0 && y>0){
       printf("To�ka se nalazi u cetvrtom kvadrantu\n");
    }
    }
