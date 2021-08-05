
/**
 * Program to Re-implement selection sort using recursion
 * Compilation : gcc selection_sort.c
 * Execution : ./a.out
 *
 * @Ritik Sedana ( 1910990138 )  , 04/8/2021
 * Ques 1. Assignment_5 - Recursion.
 *
 */
#include<stdio.h>

//function to find the index which is ahead of given index with minimum element. 
int min_index(int a[], int index, int n)
{   //base case
    if(index==n)
    return n-1;
    //minimum index ahead of current index
    int min= min_index(a, index+1, n);

    if(a[min]<a[index])
    return min;  
    else     
    return index;
}
void selection_sort( int a[] ,int index, int n)
{   
    //at this point array is already sorted	
    if(index==n)
    return;
    //finding the min index
    int min=min_index(a, index ,  n );
    //swap elements with index which contains min element
    if(min!=index) {
      int temp=a[min];
      a[min]=a[index];
      a[index]=temp;
      }

    selection_sort(a, index+1 ,  n);
}
int main()
{
  int n ;

    printf("Print no of elements in array : ");
    scanf("%d",&n);
    int a[n];
    for(int i =0; i < n ; ++i)
    {
    scanf("%d",&a[i]);
    }
    selection_sort(a,0,n);
    for(int i=0;i<n;++i)
    printf("%d ",a[i]);
}

