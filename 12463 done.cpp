//Little Nephew
//X@hid
//1september2018

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e;
    while(cin>>a>>b>>c>>d>>e)
    {
        if(a==0 && b==0 && c==0 && d==0 && e==0)
        {
            break;
        }
        long long result=a*b*c*d*d*e*e;
        cout<<result<<endl;
    }
    return 0;
}
