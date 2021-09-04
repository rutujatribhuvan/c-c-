/*
//accept and print element
#include<stdio.h>
void main()
{
    int i,a[50],n,sum=0;
    printf("enter n values");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("\n %d",&a[i]);
    }
    printf("\n addition of  elments are");
   for(i=0;i<n;i++)
   {
       sum=sum+a[i];
   }
   printf("\n addition of =%d",sum);
}        


//find minimum no.
#include<stdio.h>
void main()
{
    int i,a[50],n,min=a[0];
    printf("enter n values");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("\n %d",&a[i]);
    }
    printf("\n minimun no of  elments are");
   for(i=0;i<n;i++)
   {
      if(a[i]<min)
         min = a[i];
   }
   printf("\n minium no of =%d",min);
}        
*/

//find minimum no.
#include<stdio.h>
void main()
{
    int i,a[50],n,max=0;
    printf("enter n values");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("\n %d",&a[i]);
    }
    printf("\n maximum no of  elments are");
   for(i=0;i<n;i++)
   {
      if(a[i]>max)
         max = a[i];
   }
   printf("\n maximum no of =%d",max);
}        