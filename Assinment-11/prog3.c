#include <stdio.h>
#include <conio.h>
int prime(int);

int main()
{
    int n;
    prime(7);
}
int prime(int n)
{
    int flag = 0;
    if (n % 2 == 0)
    {
        printf("number is not prime\n");
        flag = 1;
    }
    if (flag == 0)
    {
        printf("Number is prime number\n");
        return 0;
    }
}