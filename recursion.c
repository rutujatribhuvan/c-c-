#include<stdio.h>
int fact(int no);
void main()
{
    int n;
    printf("\n enter no");
    scanf("%d",&n);
    printf("\n factorial=%d",fact(n));

}
int fact(int no)
{
    if(no==1||no==0)
    {
        return(1);
    }
    else
    {
        return(no*fact(no-1));
    }
}
