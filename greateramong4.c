#include<stdio.h> // to check the greater number among the four.

int main() {
    int a,b,c,d; // a,b,c,d are the four numbers.

    printf("HEY please enter the four numbers:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if((a>b)&&(a>c)&&(a>d))
    {
        printf("A is greater among all.");
    }
    else if((b>a)&&(b>c)&&(b>d))
    {
         printf("B is greater among all.");
    }
     else if((c>a)&&(c>b)&&(c>d))
    {
         printf("C is greater among all.");
    }
    else
    {
        printf("D is greater among all.");
    }
    
     
     return 0;
}