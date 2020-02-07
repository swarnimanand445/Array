#include<bits/stdc++.h>
using namespace std;
void left_rotatebyOne(int *arr,int n)
{
    int temp=arr[0],i;
    for(i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[i]=temp;
}
void rotate_array(int *arr,int n,int d)
{
    for(int i=0;i<d;i++)
    {
        left_rotatebyOne(arr,n);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n,d;
    int arr[100];
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotate_array(arr,n,d);
    return 0;
}