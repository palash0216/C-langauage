#include <stdio.h>
int sum_N(int N);
int main()
{
    int N ;
    printf("Enter the nth element : \n") ; 
    scanf("%d", &N);
    printf("%d", sum_N(N));
    return 0;
}
int sum_N(int N)
{
    if (N == 1)
        return 1;
    else
        return sum_N(N - 1) + N;
}