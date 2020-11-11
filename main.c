#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    double num1;
    printf("check whether a number is positive, negative");
    printf("\nEnter a number:");
    scanf("%d", &num);

    num1 = (double) num;

    if(num > 0){
        printf("The number %d you choice is a positive number", num);
    }else if (num < 0){
    printf("The number %d you choice is a negative number", num);
    }else if(num1 <= .1 || num == 0){
            printf("Hey, did you enter 0? \nor Enter a Variable double, you can't use it, I use Integer for this code");
            printf("\nRestart you program");
    }

    return 0;
}
