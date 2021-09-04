#include<stdio.h>
void main()
{
    int a=0,b=1,ans,i;
    //printf("\n %d \t %d",a,b);
    for(i=1;i<=8;i++)
    {
        ans=a+b;
        printf("\t %d",ans);
        a=b;
        b=ans;
    }

}