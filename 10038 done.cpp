#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    int a[3005],jolly[3005];
    while(cin>>t)
    {
        int flag=0;
        for(i=0; i<t; i++)
        {
            cin>>a[i];
            if(i>0)
            {
                int dif=abs(a[i]-a[i-1]);
                jolly[i-1]=dif;
            }

        }
        sort(jolly,jolly+t-1);
        int cnt=0;

       // for(int j=0;j<t;j++)cout<<j<<"-"<<jolly[j]<<endl;


        for(int j=1; j<t; j++)
        {
            if(jolly[j-1]!=j)
            {
                flag++;
                break;
            }
        }
        if(flag==0)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;

    }
    return 0;

}
