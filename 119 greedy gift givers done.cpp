#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    while(cin>>n)
    {
        if(cnt!=0)
            cout<<endl;
        cnt++;
        struct gift
        {
            string name;
            int balance;
        };

        gift ara[n];

        for(int i=0; i<n; i++)
        {
            cin>>ara[i].name;

        }
        for(int i=0; i<n; i++)
            ara[i].balance=0;

       // for(int i=0; i<n; i++)cout<<ara[i].name<<" ";cout<<endl;



        int spent,frnds;
        string frnd_name,giver;
        for(int i=0; i<n; i++)
        {
            //for(int i=0; i<n; i++)
            // cout<<ara[i].name<<ara[i].balance<<" "; cout<<endl;



            cin>>giver>>spent>>frnds;

            if(spent!=0 && frnds!=0)
                for(int p=0;p<n;p++)
                {
                    if(ara[p].name==giver)
                        ara[p].balance-=(spent/frnds)*frnds;
                }

           // cout<<ara[i].name<<ara[i].balance;
            for(int j=1; j<=frnds; j++)
            {
                cin>>frnd_name;
                for(int k=0; k<n; k++)
                {
                    if(ara[k].name==frnd_name && spent!=0 && frnds!=0)
                    {
                        ara[k].balance+=spent/frnds;
                    }
                }

            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<ara[i].name<<" "<<ara[i].balance<<endl;
        }

    }
}
