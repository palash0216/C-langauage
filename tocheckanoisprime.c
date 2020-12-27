#include<stdio.h>

int main()
{int n;
printf("Enter a number to check");
scanf("%d",&n);
     for(int i=2;i<n;i++)
{
    if((n%i)==0)
    {printf("not a prime");
    break;
    }
    if(i==n)
    {
        printf("prime");
    }
     return 0;
}
}

/* Same with the  while  loop
#include<stdio.h>

int main()
 {int i=2, n,prime=1;
 printf("Enter a number \n");
 scanf("%d",&n);
  while(i<n)   
  {
      if(n%i==0)
      {
         prime=0;
         
         break;

      }i++;
      
  }                                                                                            
 if(prime==0)
 {
     printf("The number is not a prime no. \n");
 }
     else
     {
         printf("The number is a prime no. \n");
     }
     
     return 0;
} 
*/ 