//Bafana bafana
//X@hid
//30august2018

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,p;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>k>>p;
        int result=(k+p)%n;
        if(result==0)
            result=n;
        cout<<"Case "<<i<<": "<<result<<endl;

    }
    return 0;
}
