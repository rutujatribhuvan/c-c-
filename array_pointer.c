/*
#include<stdio.h>
void main()
{
    int a[5]; // = {10,20,30,40,50};
    int i,*p;
    p=&a[0];
    for(i=0;i<5;i++)
    {   printf("\n enter 5 values");
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<5;i++)
    {  
        printf("\n a[%d]=%d",i,*p);
        p++;
    }
    }
    */
     
#include<stdio.h>
void main()
{
    int x[5] = {10,20,30,40,50};
    int i,*p[5];
    for(i=0;i<5;i++)
    {
        p[i]=&x[i];  //array of x value assigned to pointer of p
       
    
    }
    for(i=0;i<5;i++)
    {
       printf("\n x[%d]=p[%d]",i,*p[i]);

    }
    
}