#include<stdio.h>
void main()
{
    int no,i,flag=0;
    printf("enter no");
    scanf("%d",&no);
    for(i=2;i<no;i++)
    {
        if(no%i==0)
        {
        flag=1;
        break;
        }
    }
     if(flag==0)
        printf("no is prime",no);
     else
         printf("no is not prime",no);

}