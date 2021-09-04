#include<stdio.h>
int main()
{
    int a,b,c;
    int ch;
    printf("\n 1.addition 2.subtraction  3.division 4.multiplicatin 5.modulus 6.squ");
    printf("\nenter your choice(+,-,*,/,%,s):");
    scanf("%d",&ch);

    printf("enter two no");
    scanf("%d %d",&a,&b);

    
    switch(ch)
    {
     case 1:
       c= a+b;
       break;
    
     case 2:
       c= a-b;
       break;
    
     case 3:
       c= a/b;
       break;
    
     case 4:
        c= a*b;
        break;
     case 5:
       c=a%b;
       break;

     case 6:
            c=a*a;
        break;
     default:
       printf("invalid operation\n");
    }
    printf("%d ",c);
    return(0); 
} 
    
    