#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number to print its table %d \n");
    scanf("%d", &n);
    for (i = 1; i<11; i++)
        
    {

        printf("%d X %d =%d",n,i,n*i);
        printf("\n");
    }
    return 0;
}