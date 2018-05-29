/*nth Fibonacci*/
#include<stdio.h>
int fibo(int);

int main()
{
    int num;
    int result;

    printf("Enter the nth number:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Not possible");
    }
    else
    {
        result=fibo(num);
      //  printf("The %d number in Fibonacci series is %d\n",num,result);
    }
    return 0;
}
int fibo(int num)
{
    if(num==0)
    {
        return 0;
    }
    else if(num==1)
    {
        return 1;
    }
    else
    {
         int f1=0,f2=1,f3,i;
         for(i=1;i<=num;i++)
            {
                printf("%d ",f1);
                f3=f1+f2;
                f1=f2;
                f2=f3;
            }
    }
}
