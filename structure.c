/*
//stucture is collection of dissimilar element.
#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    float per;
}s1,s2,s3;
void main()
{
//struct student s1,s2,s3; // another way
printf("\n enter roll no ,name,per");
scanf("%d %s %f",&s1.roll,&s1.name,&s1.per);
printf("\n enter roll no ,name,per");
scanf("%d %s %f",&s2.roll,&s2.name,&s2.per);
printf("\n enter roll no ,name,per");
scanf("%d %s %f",&s3.roll,&s3.name,&s3.per);
printf("student record is");
printf("\n ...roll no... name....... per...");
printf("\n roll no = %d  name  =  %s per = %f",s1.roll,s1.name,s1.per);
printf("\n roll no = %d  name  =  %s per = %f",s2.roll,s2.name,s2.per);
printf("\n roll no = %d  name  =  %s per = %f",s3.roll,s3.name,s3.per);
printf("\n ..................................");
}

*/

#include<stdio.h>
struct teacher 
{
    int id;
    char name;
    float salary;
}t[3];
void  main()
{
    int i;
    for ( i = 0; i < 3; i++)
    {
        printf("enter teacher id,name,salary");
        scanf("%d %s %f",&t[i].id,&t[i].name,&t[i].salary);

    }
    for ( i = 0; i < 3; i++)
    {
        printf("\n %d,%s,%f",t[i].id,t[i].name,t[i].salary);
    }
}