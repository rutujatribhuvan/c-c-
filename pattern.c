#include<stdio.h>
void main()
{
    int no_rows,row,column;
   printf("enter no of rows");
   scanf("%d",&no_rows);
    
    for(row=1;row<=no_rows;row++)
    {
        for(column=1;column<=no_rows;column++)
         {
             if((row==1)||(row==no_rows)||(column==1)||(column==no_rows)||(row==column)||((row+column)==(no_rows+1)))
               
                printf("* ");
               
             else
                printf("  ");
        }
     printf("\n");
    }

     printf("\n"); //for taking space in two program here
     
     for(row=1;row<=no_rows;row++)

    {
        for(column=1;column<=row;column++)
         {
            
             printf("* ");
            
         }
     printf("\n");
    }

    for(row=5;row>=1;row--)
    {
      for(column=1;column<=row;column++)
         {
            
               
                printf("* ");
         }
     printf("\n");
    }

}