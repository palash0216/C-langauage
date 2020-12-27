#include<stdio.h>

int main() 
{
    int marks;

    printf(" Enter the marks of the student %d \n");
    scanf("%d",&marks);

    if(marks>=90)
    {
        printf("CONGO A GRADE");
    }
    else
    if(marks>=80 && marks<90)
    {
        printf("yep good B grade");
    }
     else
    if(marks>=70 && marks<80)
    {
        printf("good C grade");
    }
     else
    if(marks>=60 && marks<70)
    {
        printf("Pay a little more attention D grade");
    }
    else
    {
        printf("your grade is F , You really need to work hard") ;
    }
    
    

     return 0;
}