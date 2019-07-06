//X@hid
//6sep18
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,t=0;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;
        t++;
        if(t>1) cout<<endl;


        char ara[102][102];
        int intara[102][102]={0};


        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>ara[i][j];
                if(ara[i][j]=='*')
                {
                    for(int k=i-1; k<=i+1; k++)
                    {
                        for(int l=j-1; l<=j+1; l++)
                        {
                            if(k<0)k=0;
                            if(l<0)l=0;
                            intara[k][l]++;
                        }
                    }
                }
            }
        }
        cout<<"Field #"<<t<<":"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(ara[i][j]=='*')
                    cout<<"*";

                else
                    cout<<intara[i][j];



            }

            cout<<endl;
        }



    }
return 0;

}
