#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);

    for(int i = 0; i < x, i++)
    {
        int p;
        scanf("%d", &p);
        if(p == 0) break; // continue
        printf("360 / %d = %d\n", p, 360/p);
    }

    return 0;
}