#include <stdio.h>

int main()
{int i,sum=0;
for(i=1;i<=10;i++)
{sum=sum+i;

   
} printf("The sum of first Ten natural numbers is : %d",sum);
    return 0;
}
/* same program using do while loop 
#include <stdio.h>

int main()
{int i=1,sum=0;
do
{sum=sum+i;
i++;
}while(i<=10);
   
printf("The sum of first Ten natural numbers is : %d",sum);
    return 0;
}
*/