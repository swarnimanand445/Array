#include<stdio.h>
#include<stdbool.h>
bool pairSum(int *arr,int n,int sum)
{
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
    for(int i=0;i<n;i++)
    {
        int pair=arr[i];
       for(int j=i+1;j<n;j++)
       {
           if((pair+arr[j])==sum)
           return true;
       }
    }
    return false;
}
int main()
{
    int n,arr[100],sum;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&sum);
    if(pairSum(arr,n,sum))
    {
        printf("Array has two element with sum %d",sum);
    }
    else
    {
        printf("Array does not have element with sum %d",sum);
    }
    return 0;
}