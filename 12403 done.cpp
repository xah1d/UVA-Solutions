#include<bits/stdc++.h>
using namespace std;
int main()
{
    char op[10];
    long long t,sum=0,n;
    cin>>t;
    while(t--)
    {

        cin>>op;
        if(op[0]=='d')
        {
            cin>>n;

            sum=sum+n;
        }
        else
            cout<<sum<<endl;
    }
    return 0;
}
