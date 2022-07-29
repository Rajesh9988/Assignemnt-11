#include<stdio.h>
#include<conio.h>

int lcm(int ,int);

int main()
{
    int num1,num2;
    lcm(28,45);
}
int lcm(int num1,int num2)
{
    int max, flag = 1;
    max = (num1>num2)?num1:num2;
    while (flag)
    {
        if (max%num1==0 && max%num2==0)
        {
            printf("LCM:- %d",max);
            return max;
            break;
        }
            ++max;
    }
}