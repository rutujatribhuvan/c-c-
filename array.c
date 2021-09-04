//accept and print element
#include<stdio.h>
void main()
{
    int a[5],i;
    printf("enter 5 values");
    for(i=0;i<5;i++)
    {
      scanf("\n %d",&a[i]);
    }
    printf("\n array elments are");
   for(i=0;i<5;i++)
   {
       printf("\n a[%d]= %d",i,a[i]);
   }
}        