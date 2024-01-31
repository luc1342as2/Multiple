//Lucas Ghigli
//Multiple or Not of a number
//01/10/2024

#include <stdio.h>
int main(void) {
    int number1, number2; //Enter two integers
    printf("First number: \n"); //First integer
    scanf("%d", &number1);
    printf("Second number: \n"); //Second integer
    scanf("%d", &number2);
    if (number1 % number2 == 0) {
    printf("First Number is a multiple of Second number \n");
                    }
   else {
    printf("First number is not a multiple of Second number \n ");
        }
   return 0;
               }

//Doesn't show the question after entering the two integers.
