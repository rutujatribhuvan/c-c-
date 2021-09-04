#include<stdio.h>

333333

int main()
{
    int num,copy_of_no,sum=0,rem;
    printf("\n enter no");
    scanf("%d",&num);

copy_of_no= num; /*value of num would change in beloew while loop so
 we store in that to compare result at the end od the program.*/
while(num != 0)
{
    rem = num % 10;
    sum = sum + (rem*rem*rem);
    num = num /10;
}
if(copy_of_no ==  sum)

    printf("\n %d is armstrong no.",copy_of_no);
else
    printf("\n %d  is not armstrong no.",copy_of_no);


return(0);
}
