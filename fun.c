#include<stdio.h>
void sum();
int mul();
void sub(int ,int );
float div(float,float );

void sum()
{
    int x,y,z;

  
    printf("\n enter no");
    scanf("%d %d",&x,&y);
    z=x+y;
   printf("addition = %d",z);
   
}
void sub(int a,int b)
{
    int c;
    c=a-b;
    
   printf("\n subtraction= %d",c);
   
}

int mul()
{
    int x,y,z;

  
    printf("\n enter no");
    scanf("%d %d",&x,&y);
    z=x*y;
   return(z);
   
}
float div(float a,float b)
{
    float c;
    c=a/b;
    return(c);
    
    
}

int main()
{
    sum();
    sub(6,7);
    int mult;
    mult=mul(7,2);
    float p,q;
    printf("%d\n",mult);
    printf("\n enter two no"); 
    scanf("%f %f",&p,&q);
    printf("%f ",div(p,q));
          
}

