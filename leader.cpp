#include<bits/stdc++.h>
using namespace std;
int leaderElement(int *arr,int n)
{
    int leader=arr[n-1];
    int sum=arr[n-1];
    cout<<leader;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>leader)
        {
            leader=arr[i];
            cout<<leader<<" ";
            sum+=leader;
        }
    }
    return sum;
}
int main()
{
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int leader=leaderElement(arr,n);
    cout<<leader;
    return 0;
}