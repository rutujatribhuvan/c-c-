#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    c= a&b;
    printf("\n bitwise AND=%d",c);
    c= a|b;
    printf("\n bitwise OR=%d",c);
    c= a^b;
    printf("\n bitwise XOR=%d",c);
}
