/**
 * Program to print n times , the every 3rd element of fibonacci series.
 * Compilation : gcc fib.c
 * Execution : ./a.out
 *
 * @Ritik Sedana ( 1910990138 )  , 04/8/2021
 * Ques 4. Assignment_5 - Recursion.
 *
 */

#include<stdio.h>
const int maxN=1e5;
//memo array is used to memoize result of fibbonacci sequence
int memo[100000];

void fibbonacci(int index, int n)
{
    //we have already calculated answer for previous terms and memoized them and we used them to calculate our answer
    memo[index] = memo[index - 1] + memo[index - 2];

    //for every 3 elements it prints 1 answer so to print n elements we require n*3 elements
    if(index == n * 3){

      printf("%d",memo[index]);
      return;
      }
    //if current index is multiple of 3 then we print the value in it
    if(index % 3 == 0)  {

      printf("%d,",memo[index]);
      
      }
    fibbonacci(index + 1 , n);
}

void fib(int n) {
    //we need to give first 2 values
    memo[1] = 1;
    memo[2] = 1;
    fibbonacci(3,n);
}

int main()
{
    int n ;
    printf("Enter n = ");
    scanf("%d",&n);
    fib(n);

}

