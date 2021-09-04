#include<stdio.h>
void main()
{
    int a= 10,*b;
    b=&a;
    printf("\n %d",a); //print value of a = 10
    printf("\n %d",&a); //address of a
    printf("\n %d",&b); //address of b
    printf("\n %u",&a); //same addressed as a but u is as unsighned interger
    printf("\n %u",&b); //same addressed as b but u is as unsighned interger
    printf("\n %d",*b); //pointer b store the value of a
    

}