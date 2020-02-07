#include<stdio.h>
int distincThamming(int *arr,int n)
{
    int c=1;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    // for(int i=0;i<n;i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    for(int i=0;i<n-1;i++)
    {
        int temp=arr[i];
        if(temp!=arr[i+1])
        c++;
    }
    return c;
}
int main()
{
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    int distinct=distincThamming(arr,n);
    printf("\n%d",distinct);
    return 0;
}