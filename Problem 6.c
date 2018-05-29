/*Storing elements of a triangular matrix*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k,**m1,**m2,**p,n;
    printf("Enter the dimension of matrices:  ");

    scanf("%d",&n);

    m1=(int**)calloc(n,sizeof(int*));

    for(i=0;i<n;i++)

        m1[i]=(int*)calloc(i+1,sizeof(int));

    m2=(int**)calloc(n,sizeof(int*));

    for(i=n-1;i>-1;i--)

        m2[i]=(int*)calloc(i+1,sizeof(int));

    p=(int**)calloc(n,sizeof(int*));

    for(i=0;i<n;i++)

        p[i]=(int*)calloc(n,sizeof(int));

    printf("Enter lower triangular matrix(non zero entries only): \n");

    for(i=0;i<n;i++)
        for(j=0;j<i+1;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    printf("Enter upper triangular matrix(non zero entries only): \n");

    for(i=0;i<n;i++)
        for(j=i;j<i+1;j++)
        {
            scanf("%d",&m2[i][j]);
        }

    printf("Matrix A is: \n");

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            printf("%d%c",j<=i?m1[i][j]:0,j!=n-1?' ':'\n');

    printf("Matrix B is: \n");

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            printf("%d%c",j>=i?m2[i][j]:0,j!=n-1?' ':'\n');
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            for(k=0;k<n;k++)
                p[i][j]=p[i][j]+m1[i][k]*m2[k][j];

    printf("The product of two matrix is: \n ");

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            printf("%d%c",p[i][j],j!=n-1?' ':'\n');

   return 0;
}
