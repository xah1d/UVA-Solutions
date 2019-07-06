#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,j,i,a[12];
    cin>>t;
    for(int c=1; c<=t; c++)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {

            cin>>a[i];
        }

        int captain=(i/2);

        cout<<"Case "<<c<<": "<<a[captain]<<endl;
    }
    return 0;
}
