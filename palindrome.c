#include<stdio.h>
int main() 
{
    int num, rem,a, rev=0;
    printf(" enter the number");
    scanf("%d",&num);
    a=num;
    while( num>0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    if(a==rev)
    printf("\n %d is palindrome number", a);
   
    else
   {
       printf("\n %d is not palindrome number",a);
   }
   return 0;
   }