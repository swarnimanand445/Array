#include<bits/stdc++.h>
using namespace std;
int majorityElement(int *arr,int n)
{
    int c1=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            c1++;
        }
        if(c1>n/2)
        {
            cout<<"The majority element is"<<arr[i]<<" ";
            return 1;
        }
        c1=0;
    }
    //cout<<"There is no majority element in this array ";
    return -1;
}
int main()
{
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int majority=majorityElement(arr,n);
    cout<<majority;
    
}