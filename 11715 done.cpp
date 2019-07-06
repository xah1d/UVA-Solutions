#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0;
    double u,v,a,s,t,input;
    while(1)
    {
        i=i+1;
        cin>>input;
        if(input==0)
            break;
        if(input==1)
        {
            cin>>u>>v>>t;
            a=(v-u)/t;
            s=u*t+.5*a*t*t;
            cout<<"Case "<<i<<": "<<setprecision(3)<<fixed<<s<<" "<<a<<endl;
        }
        else if(input==2)
        {
            cin>>u>>v>>a;
            s=((v*v)-(u*u))/(2*a);
            t=(v-u)/a;
            cout<<"Case "<<i<<": "<<setprecision(3)<<fixed<<s<<" "<<t<<endl;
        }
        else if(input==3)
        {
            cin>>u>>a>>s;
            v=sqrt((u*u)+2*a*s);
            t=(v-u)/a;
            cout<<"Case "<<i<<": "<<setprecision(3)<<fixed<<v<<" "<<t<<endl;
        }
        else if(input==4)
        {
            cin>>v>>a>>s;
            u=sqrt((v*v)-2*a*s);
            t=(v-u)/a;
            cout<<"Case "<<i<<": "<<setprecision(3)<<fixed<<u<<" "<<t<<endl;
        }
    }
    return 0;
}
