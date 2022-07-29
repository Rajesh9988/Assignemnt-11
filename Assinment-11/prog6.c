#include<stdio.h>
#include<conio.h>
int printprime(int,int);
int main()
{
    int number1,number2;
    printprime(18,70);
}
int printprime(int number1,int number2)
{
   int i,j,flag;
   printf("enter the two intervals:");
   scanf("%d %d",&number1,&number2);
   printf("prime number present in between %d and %d:",number1,number2);
   for(i=number1+1;i<number2;i++){// interval between two numbers
      flag=0;
      for(j=2;j<=i/2;++j){ //checking number is prime or not
         if(i%j==0){
            flag=1;
            break;
         }
      }
      if(flag==0)
         printf("%d\n",i);
   }
    
}