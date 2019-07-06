#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define eps 10e-9
int main()
{
    int t,l;
    double w,r;
    cin>>t;
    while(t--)
    {
        cin>>l;
        w=(double)(6.0*l)/10.0;
        r=(double)(2.0*l)/10.0;
        double red=(pi*r*r)+eps;
        double green=l*w-red+eps;
        printf("%.2f %.2f\n",red,green);

    }
    return 0;
}