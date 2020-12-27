#include<stdio.h>

int main()
{  int sum=0;
    for (int i = 1; i<=10; i++)
        
    {

        printf("8 X %d =%d",i,8*i);
        printf("\n");
        sum=sum+(8*i);
    }
    printf("The total sum of the table is : %d",sum);

     return 0;
}