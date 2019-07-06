#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {

        int a,b,c;
        cin>>a>>b>>c;
        if(a>20 || b>20 ||c>20)
            cout<<"Case "<<i<<": "<<"bad"<<endl;
        else
            cout<<"Case "<<i<<": "<<"good"<<endl;
    }
    return 0;

}
