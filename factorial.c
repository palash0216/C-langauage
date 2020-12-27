#include<stdio.h>

int main() 
{
 int n,ans=1;
 printf("Enter a number to find its factorial\n");
 scanf("%d",&n);
 for(int i=n;i>=1;i--)
 {
ans=ans*i;
 }  printf("The factorial of the number is : %d",ans);  
 
     return 0;
}
/* same program using while loop
#include<stdio.h>

int main() 
{
 int n,ans=1;
 printf("Enter a number to find its factorial\n");
 scanf("%d",&n);
 while(n>1)
 {
ans=ans*n;
n--;
 }  printf("The factorial of the number is : %d",ans);  
 
     return 0;
} 
*/