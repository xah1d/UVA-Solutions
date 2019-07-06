#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)  //always use this for pi
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {


        double t_area,c_area,bc_area,s,r;
        s=(a+b+c)/2.0;
        t_area=sqrt(s*(s-a)*(s-b)*(s-c));
        r=t_area/s;
        c_area=pi*r*r;

        double br=(a*b*c)/(4.0*t_area);
        bc_area=pi*br*br;
        bc_area=bc_area-t_area;
        t_area=t_area-c_area;
        cout<<setprecision(4)<<fixed<<bc_area<<" "<<t_area<<" "<<c_area<<endl;

    }
    return 0;
}
