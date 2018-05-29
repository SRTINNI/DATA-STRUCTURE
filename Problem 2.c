/*Bubble sort*/
#include<stdio.h>
void bubble(int[],int);
void main()
{
    int a[20],i,n;
    printf("Enter the number of items in the array");
    scanf("%d",&n);
    printf("Enter the data in the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble(a,n);
}
void bubble(int a[],int n)
{
    int i,temp,j,p;
    for(i=1;i<n;i++)
    {
        for(p=0;p<n;p++)
        {
            if(a[p]>a[p+1])
                {
                    temp=a[p];
                    a[p]=a[p+1];
                    a[p+1]=temp;
                }
        }
    }
    for(i=0;i<n;i++)
        printf("\n%d",a[i]);
}
