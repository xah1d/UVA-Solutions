#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double x,y,R;
        cin>>x>>y>>R;
        double r=(double)sqrt(x*x+y*y);

        cout<<fixed<<setprecision(2)<<abs(R-r)<<" "<<R+r<<endl;
    }
}
