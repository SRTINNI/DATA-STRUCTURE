/*Addition,Subtraction and Multiplication*/
#include<stdio.h>
void show(int a[20][20],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int i,j,k,n,a[20][20],b[20][20],c[20][20];
    printf("\nEnter the dimension of the square matrices:\n");
    scanf("%d",&n);
    printf("\nEnter the elements of matrix A:");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
    printf("\nEnter the elements of matrix B:");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        scanf("%d",&b[i][j]);
    }
    printf("\n Matrix A: \n");
    show(a,n);
    printf("\nMatrix B: \n");
    show(b,n);
    //For addition

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
    printf("\n\nAddition of two matrices: \n");
    show(c,n);
    //For subtraction

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        c[i][j]=a[i][j]-b[i][j];
    }
    printf("\n\nSubtraction of two matrices: \n");
    show(c,n);
    //For multiplication

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        c[i][j]=0;
        for(k=0;k<n;k++)
        {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    }
    printf("\n\nMultiplication of two matrices: \n");
    show(c,n);
}
