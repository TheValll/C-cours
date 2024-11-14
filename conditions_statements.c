#include <stdio.h>

int main(){
    int x = 20;
    int y = 18;
    int time = 8;
    int day = 4;

    if (20 > 18) {
        printf("20 is greater than 18\n");
    } 


    if (x > y) {
        printf("x is greater than y\n");
    }


    if (time < 18){
        printf("Good day.\n");
    }else{
        printf("Good evening.\n");
    }


    if (time < 10){
        printf("Good morning.\n");
    }else if (time < 20){
        printf("Good day.\n");
    }else{
        printf("Good evening.\n");
    }


    (time < 18) ? printf("Good day.\n") : printf("Good evening.\n"); 


    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Looking forward to the Weekend");
        break;
    }
    
    return 0;
}