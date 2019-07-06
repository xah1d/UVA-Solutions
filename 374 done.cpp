
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int bigMod(ll b,ll p,ll m)
{
    ll p1,p2;
    if(p==0) return 1;
    else if(p%2==0)
    {
        p1=bigMod(b,p/2,m)%m;
        return (p1*p1)%m;
    
    }
    else if(p%2!=0)
    {
        p1=b%m;
        p2=bigMod(b,p-1,m)%m;
        return (p1*p2)%m;
    }
}

int main()
{
    ll b,p,m;
    while(cin>>b>>p>>m)
    {
      cout<<bigMod(b,p,m)<<endl;  
    }
   
    
    return 0;
}

