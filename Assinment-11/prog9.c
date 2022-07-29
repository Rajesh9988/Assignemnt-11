#include<stdio.h>
#include<conio.h>
int squar(int);
int main()
{
    int number;
    squar(6);
}
int squar(int number)
{
    int sqr;
    sqr = number*number;
    printf("SQR:- %d",sqr);
}