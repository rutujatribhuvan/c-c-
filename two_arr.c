#include<stdio.h>
#define max_size 100
int main()
{
     int i,row,column,tosearch,found,j;
     
    printf("enter the no of rows and column of array");
    scanf("%d %d",&row,&column);

    int arr[row][column];
   
    printf("elements %d in array",(row*column));
      for(i=0;i<row;i++)
         {
         for(j=0;j<column;j++)
           scanf("%d",&arr[row][column]);
         }
    
      printf("enter elements to search");
      scanf("%d",&tosearch);
      found=0;
        for(i=0;i<row;i++)
         {
         for(j=0;j<column;j++)
         {
          if(arr[i][j]==tosearch)
           {
                found=1;
                  break;
              
           }
         }
         }

        if(found==1)
        {

             printf("%d is (%d %d) \n",tosearch);
               //found++;

        }
        else
       {
             printf("%d is not found in array ",tosearch);
       }
   return(0);
}