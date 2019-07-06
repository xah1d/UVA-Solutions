#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,a,b,c,i;
        cin>>n;
        for(i=1;i<=n;i++)
            {
                cin>>a>>b>>c;
                sum=sum+a*c;


            }
            cout<<sum<<endl;

    }
    return 0;
}
