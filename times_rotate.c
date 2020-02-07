#include<stdio.h>
int times_rotate(int *arr,int n)
{
    int min=arr[0];
    int min_index;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            min_index=i;
            // printf("%d",min_index);
        }
       
    }
    return min_index;
}
int main()
{
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int times=times_rotate(arr,n);
    printf("%d",times);
    return 0;
}