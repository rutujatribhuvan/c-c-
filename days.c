#include<stdio.h>
int main()
{
    int week;
    printf("\n enter week number(1-7):");
    scanf("%d",&week);

    switch(week)
    {
     case 1:
       printf("its sunday");
       break;
    
     case 2:
        printf("its monday");
       break;
    
     case 3:
          printf("its tuesday");
       break;
    
     case 4:
        printf("its wednesday");
        break;
     case 5:
          printf("thursday");
       break;

     case 6:
            printf("its friday");
        break;
    case 7:
            printf("its saturday");
        break;
     
     default:
       printf("invalid operation\n");
    }
    return(0); 
} 
    
    