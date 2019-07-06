#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    //int ara[102];
    bool boolara[3652];
    while(t--)
    {
        int cnt=0,n,p,party,temp;
        cin>>n>>p;
        memset(boolara,1,sizeof(boolara));
        for(int k=0; k<p; k++)
        {
            cin>>temp;;
            party=temp;
            for(int i=1; ; i++)
            {
                party=temp*i;
                if(party>n)
                    break;

                boolara[party-1]=false;
            }
        }
        for(int j=5; j<n; j+=7)
        {
            boolara[j]=true;
            boolara[j+1]=true;
        }
        for(int j=0; j<n; j++)
        {
            if(boolara[j]==false)
                cnt++;
        }



        cout<<cnt<<endl;
    }

}
