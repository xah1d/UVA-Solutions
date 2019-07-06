#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int walls,ara[51],j,highjump=0,lowjump=0;
        cin>>walls;
        for(j=0;j<walls;j++)
        {
            cin>>ara[j];
            if(j>0)
            {
                if(ara[j]>ara[j-1])
                    highjump++;
                else if(ara[j]<ara[j-1])
                    lowjump++;
            }
        }
        cout<<"Case "<<i<<": "<<highjump<<" "<<lowjump<<endl;


    }
}
