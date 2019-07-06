//Hotel with infinite room
//X@hid
//1september2018

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s,d,l,j;
    while(cin>>s>>d)
    {
        long long int i,day=1;

        for(i=s;day<=d;i++)
        {
            for(j=1; j<=i; j++)
            {
                day++;
            }


        }
        cout<<i-1<<endl;


    }
    return 0;
}
