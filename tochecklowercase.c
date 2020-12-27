#include<stdio.h> // program to check the character enetered is a lower case one.

int main() {
     
     char  ch;
     printf("Enter the character please: \n");
     scanf("%c",&ch);
     if((ch>='a') && (ch<='z'))
     {
         printf("Hey you had entered a lowercase character \n");
     }
     else
    {
        printf("Hey , you had enterd something else\n");
    } 
    
     return 0;
}