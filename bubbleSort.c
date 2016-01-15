#include<stdio.h>
void swap(int *, int *);
int main()
{
    int A[10] , i ,j ;
for(i= 0 ; i <= 9; i++)
{
printf("Enter %d th number\t",i);
scanf("%d",&A[i]);
printf("\n");
}
//print the array
for(i=0;i<10;i++)
printf("%d\n",A[i]);

for(i=0;i<9;i++)
{
for(j=0;j<9-i;j++)
{
if(A[j] > A[j+1])
{
    swap(&A[j], &A[j+1]);
    
//temp = A[j];
//A[j] = A[j+1];
//A[j+1] =  temp;
}

}
}
printf("Sorted Array:\n");
for(i=0;i<10;i++)
printf("%d\n",A[i]);
printf("\n");
}

void swap(int *p , int *q)
{
int temp;
temp = *p;
*p = *q;
*q = temp;
}
