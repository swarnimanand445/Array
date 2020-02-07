#include<bits/stdc++.h>
using namespace std;
void rotate_middleLeftbyOne(int *arr,int n)
{
    int temp=arr[1],i;
    for( i=1;i<n-2;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[i]=temp;

}

void rotate_array(int *arr,int n,int d)
{
    for(int i=0;i<d;i++)
    {
        rotate_middleLeftbyOne(arr,n);
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
    return 0;
}