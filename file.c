#include<stdio.h>
#include<stdlib.h>
void main()
{
    int num;
    char c ;

    FILE *fptr;
    fptr = fopen("demo.txt","w");
    printf("\n enter num");
    scanf("%d",&num);
    fprintf(fptr,"we write in file");
    fprintf(fptr,"\n %d",num);
    printf("enter charceter");
    sacnf("%s",&c);
    putc(fptr,"i love ");
   
    getc("%s",c);

    


    fclose(fptr);
    

} 