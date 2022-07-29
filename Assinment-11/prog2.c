#include<stdio.h>
#include<conio.h>
int hcf(int,int);
int main()
{
     int a,b;
     hcf(178,108);
}
int hcf(int a,int b)
{
     int i,hcf;
     for ( i = 1; i <= a||i<= b; i++)
     {
          if (a%i==0 && b%i==0)
               {
                    hcf = i;
               }    
     }
     printf("HCF:- %d",hcf);     
     return 0;
}