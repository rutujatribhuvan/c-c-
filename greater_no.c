#include<stdio.h>
void main()
{
    /* else_if ladder
    int x,y,z;
    printf("enter value");
    scanf("%d %d %d",&x, &y, &z);
    if(x>y&&x>z)
    printf("%d is greater",x);
    else if(y>x&&y>z)
    printf("%d is greater",y);
    else if(z>x&&z>y)
    printf("%d is greater",z);
    else
    printf("enter proper choice");
}
*/
//nested_if
int x,y,z;
    printf("enter value");
    scanf("%d %d %d",&x, &y, &z);
    if(x>y)
    {
        if(x>z)
        printf("\n %d is greater",x);
        else
        printf("\n %d is greater",z);
    }
    if(y>x)
    {
        if(y>z)
        printf("\n %dis greater",y);
        else
        printf("\n %dis greater",z);

    }
}