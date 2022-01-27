#include <stdio.h>

main() {

    int num, dis, wid;
    printf("Unesi num, dis, wid");
    scanf("%d %d %d", &num, &dis, &wid);

    dis=(num==1?0:dis*(num-1)+wid*(num-2));
    printf("trazeni broj je %d", dis");
}
