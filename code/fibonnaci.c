#include <stdio.h>
int fibonnaci(int x){
    int a = 0;
    int b = 1;
    x = x-2;
    printf("%d,%d,",a,b);
    while(x!=0){
        int z = a+b;
        printf("%d",z);
        a = b;
        b = z;
        x--;
        if (x>0){
            printf(",");
        }
    }

}