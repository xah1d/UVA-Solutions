#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,r;
    int ara[505];
    cin>>t;
    while(t--)
    {int result=0,sum=0;
        cin>>r;
        int maxx=0,minimum;
        for(int i=0;i<r;i++)
        {
            cin>>ara[i];

        }
        int i,minn,j;


        for(j=0;j<r;j++)
        {
            result=0;
            for(i=0;i<r;i++)
            {

                result=result+abs(ara[j]-ara[i]);

            }

           if(j==0)
            minn=result;
           else if(result<minn)
              minn=result;

        }
        cout<<minn<<endl;
    }
}
