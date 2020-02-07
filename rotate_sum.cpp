#include<bits/stdc++.h>
using namespace std;
vector<int> sum_rotate;
void left_rotateByOne(int *arr,int n)
{
    int temp=arr[0],i,sum=0;
   
    for( i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[i]=temp;
    for(int j=0;j<n;j++)
    {
        sum+=arr[j]*j;
    }
    sum_rotate.push_back(sum);

}
int maxSum(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        left_rotateByOne(arr,n);
    }

    int large=sum_rotate[0];
    
    for(int i=0;i<n;i++)
    {
        cout<<sum_rotate[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        if(sum_rotate[i]>large)
        {
            large=sum_rotate[i];
        }
    }
    return large;
}
int main()
{
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=maxSum(arr,n);
    cout<<"\nThe largest sum is"<<sum;
}