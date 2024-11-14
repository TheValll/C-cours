#include <stdio.h>

int main(){
    int i = 0, y= 0;
    int x, a, b;

    while(i < 5){
        printf("%d\n", i);
        i++;
    }


    do{
        printf("%d\n", y);
        y++;
    }
    while(y < 5);


    for ( x = 0; x < 10; x++)
    {
        printf("%d\n", x);
    }

    for (a = 1; a <= 2; ++a) {
        printf("Outer: %d\n", a); 

        for (b = 1; b <= 3; b++) {
            printf(" Inner: %d\n", b);
        }
    }
    
    return 0;
}