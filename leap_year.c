#include <stdio.h>

int main()
{                                                                   /*  To determine whether a year is a leap year, follow these steps:
                                                                    1    If the year is evenly divisible by 4, go to step 2. ...{yes}
                                                                    2   If the year is evenly divisible by 100, go to step 3. ...{no}
                                                                    3  If the year is evenly divisible by 400, go to step 4. ...{yes}
                                                                    4  The year is a leap year (it has 366 days).
                                                                    5  The year is not a leap year (it has 365 days).*/

    int year;
printf("Enter the year you want to check \n");
scanf("%d",&year);

if((year%4==0) &&(!(year%100)==0)||((year%400)==0))
{
    printf("The Year you are searching for is a leap year \n");
}
else
{
    printf("The year you are searching for is not a leap year \n");
}

printf("Hello , The year you entered is:%d",year);

 
    return 0;
}