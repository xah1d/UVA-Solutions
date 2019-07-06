#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,s,d,b,a;
    cin>>t;
    while(t--)
    {
        cin>>s>>d;
        a=(s-d)/2;
        b=(s-d)/2+d;
        if(a<0 || b<0 ||a+b!=s)
            cout<<"impossible"<<endl;
        else
        {
            if(a>b)
                cout<<a<<" "<<b<<endl;
            else
                cout<<b<<" "<<a<<endl;
        }
    }
    return 0;
}

