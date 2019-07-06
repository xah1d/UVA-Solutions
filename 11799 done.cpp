#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[101];
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,m=0;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>a[i];
            if(a[i]>m)
                m=a[i];
        }
        cout<<"Case "<<i<<": "<<m<<endl;
    }
    return 0;
}
