#include<stdio.h>
#include<conio.h>

int nextprime(int);
int main()
{
    int n;
    nextprime(36);
}
int nextprime(int n)
{
   int i , m,flag=0,num;
   m = n/2;
   for ( i = 2; i <=m; i++)
   {
    if (n%2==0)
    {
        num = n+1;
        printf("Next prime number is :- %d",num);
        break;
    }
    if (flag==0)
    {
        num = n+2;
        printf("Next prime number is :- %d",num);
        return 0;
    }
    
   }
   
}