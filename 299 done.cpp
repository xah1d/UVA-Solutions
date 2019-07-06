#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l;
    cin>>t;
    int ara[51];
    while(t--)
    {
        int cnt=0;
        cin>>l;
        for(int i=0; i<l; i++)
        {
            cin>>ara[i];
        }

        for(int k=1;k<l;k++)
            {

            for(int j=0;j<l-1;j++)
                {
                    if(ara[j]>ara[j+1])
                    {
                        swap(ara[j],ara[j+1]);
                        cnt++;
                    }
                }
            }
            cout<<"Optimal train swapping takes "<<cnt<<" swaps."<<endl;

    }
    return 0;
}
