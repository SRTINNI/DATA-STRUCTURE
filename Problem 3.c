/*Binary Search*/
#include<stdio.h>
int main()
{
    int a[100],beg,end,mid,n,i,search;
    printf("Enter the number of Array elements:\n");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Element to be searched:\n");
    scanf("%d",&search);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while(beg<=end)
    {
        if(a[mid]<search)
        {
            beg=mid+1;
        }
        else if(a[mid]==search)
        {
            printf("%d found at location %d.\n",search,mid+1);
            break;
        }
        else
            end=mid-1;
        mid=(beg+end)/2;
    }
    if(beg>end)
        printf("%d is not present in the list.\n",search);
    return 0;
}

