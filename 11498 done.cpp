//_x_a_h_i_d_
//7sep18
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,m,t,x,y;
    while(cin>>k && k!=0)
    {
        cin>>n>>m;
        for(int i=1; i<=k; i++)
        {
            cin>>x>>y;
            if(x>n && y>m)
                cout<<"NE"<<endl;
            else if(x>n && y<m)
                cout<<"SE"<<endl;
            else if(x<n && y>m)
                cout<<"NO"<<endl;
            else if(x<n && y<m)
                cout<<"SO"<<endl;
            else
                cout<<"divisa"<<endl;
        }
    }

    }
