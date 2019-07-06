#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a[21];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int shop,sum=0;
        cin>>shop;
        for(int j=0;j<shop;j++)
        {
            cin>>a[j];

        }


        for(int k=1;k<shop;k++)//sorting start
            {

            for(int j=0;j<shop-1;j++)
                {
                    if(a[j]>a[j+1])
                    {
                        swap(a[j],a[j+1]);

                    }
                }
            }//sorting end

        for(int k=0;k<shop-1;k++)
        {
            sum=sum+a[k+1]-a[k];
        }
        cout<<sum*2<<endl;
    }
    return 0;
}
