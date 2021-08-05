/**
 * Program to implement Tower of hanoi function.
 * Compilation : gcc tower_of_hanoi.c
 * Execution : ./a.out
 *
 * @Ritik Sedana ( 1910990138 )  , 04/8/2021
 * Ques 3. Assignment_5 - Recursion.
 *
 */
#include<stdio.h>
//a variable to keep record of total number of operations done
int total=0;

//function to change disk from one tower to another parameters(from tower, to tower, helper tower)
//basic idea used is first move the disk to auxilary tower using destination tower then from auxillary tower to destination tower using source tower

void tower_of_hanoi(int n, char from, char to, char aux){
    if(n==0) 
    return;

    //n-1 one disks will be left after each operation
    tower_of_hanoi(n-1, from,aux,to);

    //moving the disk from source tower to destination tower 
    printf("%c to %c \n",from,to);

    total++;
    tower_of_hanoi(n-1, aux,to,from);

}

int main() {
    tower_of_hanoi(3,'A','C','B');
    printf("Total movements required = %d\n",total);
}

