#include<stdio.h>

int main() 
{
    int phy,che,math; 
    float total;
     printf("Enter the marks in phy %d  \n");
     scanf("%d",&phy);

     printf("Enter the marks in che %d \n");
     scanf("%d",&che);

     printf("Enter the marks in math %d \n");
     scanf("%d",&math);
     total=(phy+che+math)/3;

     if((total>=40)||(phy>=33 && che>=33 && math>=33))
     {
         printf("CONGRATULATIONS, DEAR YOU ARE PASS.%f",total);
     }
     else
     {
         printf("SORRY , DEAR YOU ARE FAIL. %f",total);
     }
     
     return 0;
}