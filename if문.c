#include <stdio.h>

int main(){
    // int x;
    // scanf("%d", x);
    // while(x != 1){
    //     if(x % 2 == 1) x = 3 * x + 1
    //     else x = x / 2;
    //     printf("%d\n", x);
    // }
    do{
        if(x % 2 == 1) x = 3 * x + 1;
        else x = x / 2;
        printf("%d\n", x);
    } while (x != 1);

    /* do{코드} while(조건)
    while(조건) {코드} */
    
    return 0;
}