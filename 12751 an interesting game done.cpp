#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long n,k,x;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>k>>x;
        long sum=(n*(n+1))/2;
        long del=(k*((2*x)+k-1))/2;
        //cout<<sum<<" "<<del<<endl;
        cout<<"Case "<<i<<": ";
        cout<<sum-del<<endl;
    }

}
