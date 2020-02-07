#include<bits/stdc++.h>
using namespace std;
void gcd(int a,int b)
{
    int gcd;
    for(int i=1;i>=a && i<=b;i++)
    {
        if(a%i==0)
        {
            gcd=i;
        }
    }
    cout<<"the gcd of "<<a<<" and "<<b<<" is "<<gcd;
}
int main()
{
    int a,b;
    cin>>a>>b;
    gcd(a,b);
    return 0;
}