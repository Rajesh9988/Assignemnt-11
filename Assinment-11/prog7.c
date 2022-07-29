#include<stdio.h>
#include<conio.h>
int fibonacci(int);
int main()
{
    int num;
    fibonacci(15);
}
int fibonacci(int num)
{
    int i,n1=0,n2=1,n3=0;
    for ( i = 2; i < num; ++i)
    {
        n3 = n1+n2;
        printf(" %d\n",n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}