#include<stdio.h>
void main()
{
    int no,i,fact=1;
    printf("enter no");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        fact=fact*i;
    }
   printf("\n factorial of %d is %d",no,fact);
}