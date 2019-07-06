#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c,f;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>c>>f;
        double cc,cf;
        cf=(9.0/5.0)*c+32;
        double finalf=cf+f;

        cc=(5.0*(finalf-32))/9.0;


        cout<<"Case "<<i<<": "<<setprecision(2)<<fixed<<cc<<endl;


    }
    return 0;
}
