#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ara[10];
    cout<<"Lumberjacks:"<<endl;
    cin>>t;
    while(t--)
    {
        int cnt=0;
        for(int i=0;i<10;i++)
        {
            cin>>ara[i];

        }
        for(int i=0;i<9;i++)
        {
            if(ara[i]>ara[i+1])
                cnt++;
        }
        if(cnt==0 || cnt==9)
        cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;



    }
    return 0;
}
