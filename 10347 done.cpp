#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    while(cin>>a>>b>>c)
    {

        double s=(a+b+c)/2.0;

        double area=4.0/3.0*sqrt(s*(s-a)*(s-b)*(s-c));
        if(area>0.0)

            cout<<setprecision(3)<<fixed<<area<<endl;
        else
        {
            area=-1;
            cout<<setprecision(3)<<fixed<<area<<endl;
        }
    }
    return 0;
}
