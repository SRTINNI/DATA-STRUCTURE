/*Factorial*/
#include<stdio.h>
long long int fact(int a);
int main()
{
  int a;
  printf("Enter an integer::");
  scanf("%lld",&a);
  printf("%lld",fact(a));
  return 0;
}
long long int fact(int a)
{
     if(a>1)
    {
        return a*fact(a-1);
    }
   else
    {
         return 1;
    }
}
