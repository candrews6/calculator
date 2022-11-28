#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include <ctype.h>

int main()
{
char letter;
float num1,num2,circumference, pi=3.142;

printf("Which method would you like to use? \nM - Multiplication, \nD - Division, \nS - Subtraction, \nA - Addition, \nP - Percentage \nC - Circumference\n\n");
    scanf(" %c", &letter);
    if (letter =='M' || letter =='m' || letter =='D' || letter =='d' || letter =='S' || letter =='s' || letter =='A' || letter =='a' || letter =='P' || letter =='p' || letter =='C' || letter == 'c')
    {
    while(letter =='C' || letter =='c')
    {
    printf("\nEnter diameter:\n");
    scanf("%f", &num1);
    printf("The circumference of %.2lf is %.2lf\n", num1, num1*pi);
    return 1;
    }
        printf("\n1st number:\n");
        scanf("%f", &num1);
        printf("\n2nd number:\n");
        scanf("%f", &num2);
        if (letter=='M' || letter=='m')
        {
        printf("The sum of %.2lf and %.2lf is %.2lf\n", num1,num2, num1*num2);
        }
        else if(letter=='D' || letter=='d')
        {
        printf("The sum of %.2lf and %.2lf is %.2lf\n", num1,num2, num1/num2);
        }
        else if(letter=='S' || letter=='s')
        {
        printf("The sum of %.2lf and %.2lf is %.2lf\n", num1,num2, num1-num2);
        }
        else if(letter=='A' || letter=='a')
        {
        printf("The sum of %.2lf and %.2lf is %.2lf\n", num1,num2, num1+num2);
        }
        else if(letter=='P' || letter=='p')
        {
        printf("The percentage of %.2lf and %.2lf is %.2lf\n", num1,num2, (num1*100)/num2);
        }
    }
        else if (letter !='M' || letter !='m' || letter !='D' || letter !='d' || letter !='S' || letter !='s' || letter !='A' || letter !='a' || letter !='P' || letter !='p' || letter !='C' || letter !='c')
            {
            printf("\nInvalid character!\n");
            }
return 0;
}
