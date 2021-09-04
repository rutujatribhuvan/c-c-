/*
#include<stdio.h>
#define max_size 100
int main()
{
    int arr[max_size];
    int i,row,tosearch,found;
    printf("enter row of array");
    scanf("%d",&row);

    printf("elements in array");
    for(i=0;i<row;i++)
    {
       // for(j=0;j<row;j++)
        scanf("%d",&arr[i]);

    }
   printf("enter elements to search");
   scanf("%d",&tosearch);
   found=0;
   for(i=0;i<row;i++)
   {
       if(arr[i]==tosearch)
       {
           found=1;
        break;
       }

   }
   if(found==1)
   {
       printf("%d is found at position at %d",tosearch,i);

   }
  else
   {
       printf("%d is not found in array",tosearch);
   }
   return(0);
}
*/

#include<stdio.h>
#define max_size 100
int main()
{
     int i,row,column,tosearch,found,j;
     int arr[row][column];
   
    printf("enter the no of rows and columnof array");
    scanf("%d %d",&row,&column);

    printf("elements in array");
    {
         for(j=0;j<row;j++)
         {
         for(j=0;j<column;j++)
           scanf("%d",&arr[row][column]);
         }
    }
      printf("enter elements to search");
      scanf("%d",&tosearch);
      found=0;
        for(j=0;j<row;j++)
         {
         for(j=0;j<column;j++)
         {
          if(arr[i][j]==tosearch)
           {
               //found=1;
               //break;
               printf(("%d %d) \n",i,j);

           }
         }
         }

   
   /*if(found==1)
   {
       printf("%d is found at position at %d ",tosearch,i,j);

   }*/
  if(found==0)
   {
       printf("%d is not found in array",tosearch);
   }
   return(0);
}