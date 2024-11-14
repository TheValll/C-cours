#include <stdio.h>

int main(){
    int myNum = 15;
    int x = 10;
    int y = 25;
    int sum = x + y;
    int a = 6, b = 7, c = 9;
    int num1 = 5;
    int num2 = 2;

    float myFloat = 5.99;
    float sum2 = (float) num1 / num2;

    char myLetter = 'd';
    char ascii = 66;
    char myText[] = "Hello";

    const int MINUTESPERHOUR = 60;
    const float PI = 3.14;

    printf("%d\n", myNum);
    printf("%f\n", myFloat);
    printf("%c\n", myLetter);

    printf("My favorite number is %d\n", myNum);
    printf("My number is %d and my letter is %c\n", myNum, myLetter);

    printf("The sum of %d and %d is %d\n", x, y, sum);
    printf("%d\n", a + b + c);

    printf("%c\n", ascii);
    printf("%s\n", myText); 

    printf("%.1f\n", myFloat);
    printf("%.2f\n", myFloat);
    printf("%.3f\n", myFloat);

    printf("%lu\n", sizeof(myNum));

    printf("%f\n", sum2);

    printf("%d\n", MINUTESPERHOUR);
    printf("%.2f\n", PI);
    return 0;
}