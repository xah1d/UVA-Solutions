#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int H,b,n,W;
    while(cin>>n>>b>>H>>W)
    {
        int h[H];
        int w[W];
        vector<long long int>budget;

       // cout<<"success(1)"<<endl;
        for(int i=0; i<H; i++)
        {
            bool place=false;
            cin>>h[i];
            for(int k=0; k<W; k++)
            {
                cin>>w[k];
                if(w[k]>=n)
                    place=true;
            }
            if(place==true)
                budget.push_back(n*h[i]);
        //cout<<"success(2)"<<endl;

        }
        sort(budget.begin(),budget.end());
        //cout<<"success(3)"<<endl;
        if(budget.size()>0 && budget[0]<=b)
            cout<<budget[0]<<endl;
        else
            cout<<"stay home"<<endl;

    }
}
