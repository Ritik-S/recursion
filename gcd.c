
/**
 * Program to find gcd of two numbers
 * Compilation : gcc gcd.c
 * Execution : ./a.out
 *
 * @Ritik Sedana ( 1910990138 )  , 04/8/2021
 * Ques 2. Assignment_5 - Recursion.
 *
 */

#include<stdio.h>

//function to calculate gcd using euler's totient and recursion
int gcd(int number1, int number2)
{
    //base case
    if(number2==0)
    return number1;

    gcd( number2 , number1 % number2 );
}
int main()
{
    int number1 ,number2;
    printf("Enter two numbers: ");
    scanf("%d %d", &number1 , &number2);
    printf("%d\n", gcd( number1 , number2 ));
}

