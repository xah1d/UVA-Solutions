#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        unsigned int a,b,c;
        cin>>a>>b>>c;

        if(a+b<=c || a+c<=b || c+b<=a)
            {cout<<"Case "<<i<<": "<<"Invalid"<<endl;}
        else
        {
            if(a==b && b==c && a==c)
                cout<<"Case "<<i<<": "<<"Equilateral"<<endl;
            else if((a==b && b!=c)||(b==c && a!=c)||(a==c && a!=b))
                cout<<"Case "<<i<<": "<<"Isosceles"<<endl;
            else if(a!=b && b!=c && a!=c)
                cout<<"Case "<<i<<": "<<"Scalene"<<endl;
        }
    }
    return 0;
}
