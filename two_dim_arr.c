//accept and print element
#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("\n enter  values");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
          scanf("\n %d",&a[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
         scanf("%d",&b[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
         c[i][j]=a[i][j]*b[i][j];
    }
  
   printf("\n array elments are");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
            printf("\t %d *%d=%d",a[i][j],b[i][j],c[i][j]);
  
       }
         printf("\n");
         
       }
}        