#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("Write the value of n %d \n");
    scanf("%d", &n);
    do
    {
        
        printf("The first natural numbers %d \n", i);
            i++;
    } while (i <= n);
    return 0;
}