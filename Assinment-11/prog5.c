#include<stdio.h>
#include<conio.h>

int primenumber(int);
int main()
{
    int n;
    primenumber(10);
}
int primenumber(int n)
{
    int i,flag=0;
    for ( i = 1; i <= n; i++)
    {
        if(n%i==0)
        {
            flag =1;
            break;
        }
        if (flag==0)
        {
            printf("number is prime number");
            printf("%d",i);
        }
        
    }
    return 0;
}