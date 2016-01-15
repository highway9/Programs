//
//  selectionSort.c
//  
//
//  Created by Ashutosh Pandey on 15/01/16.
//
//

#include "selectionSort.h"
#include "insertionSort.h"
#include <stdio.h>
#include <math.h>
void selectSort(int A[], int);
void swap(int *, int *);
void printA(int A[], int);
//int main()
//{
   //}


void selectSort(int A[], int capacity)
{
    int i , j ;
    
    for(i=0;i < capacity - 1 ; i++)
    {
        for(j = i+1 ; j < capacity; j++)
        {
            if(A[i] > A[j])
                swap(&A[i],&A[j]);
        }
    }
    
}

void printA(int A[], int capacity)
{
    if(capacity == 999){
        printf("Call from insertion Sort\n");return;}
    
    for(int i = 0 ; i < capacity ; i++)
        printf("%d \n",A[i]);
    
}

void swap(int *p , int *q)
{
    int temp;
    temp = *p;
    *p=*q;
    *q=temp;
}

