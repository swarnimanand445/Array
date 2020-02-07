#include<bits/stdc++.h>
using namespace std;
void rotate_rightbyOne(int *arr,int n)
{
    int temp=arr[n-1],i;
    for(int i=n-2;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
}
void rotate_array(int *arr,int n,int d)
{
    for(int i=0;i<d;i++)
    {
        rotate_rightbyOne(arr,n);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n,d,arr[100];
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotate_array(arr,n,d);
    return  0;
}