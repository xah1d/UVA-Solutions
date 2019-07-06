#include<bits/stdc++.h>
using namespace std;
#define test_case(tc) for(int test=1;test<=tc;test++)
int mile(int n)
{
    return ((n/30)+1)*10;
}
int juice(int n)
{
    return ((n/60)+1)*15;
}
int main()
{
    int t;
    cin>>t;
    test_case(t)
    {
        int n;
        cin>>n;
        int mile_sum=0,juice_sum=0;
        while(n--)
        {
            int call;
            cin>>call;
            mile_sum+=mile(call);
            juice_sum+=juice(call);

         }
         cout<<"Case "<<test<<": ";
         if(mile_sum<juice_sum)
            cout<<"Mile "<<mile_sum<<endl;
         else if(mile_sum>juice_sum)
            cout<<"Juice "<<juice_sum<<endl;
         else
            cout<<"Mile Juice "<<mile_sum<<endl;

    }
}
