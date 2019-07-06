#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int t,ara[1000];
    while(cin>>t)
    {
        int cnt=0;
            for(int i=0;i<t;i++)
               {
                cin>>ara[i];
               }
            for(int k=1;k<t;k++)
            {

            for(int j=0;j<t-1;j++)
                {
                    if(ara[j]>ara[j+1])
                    {
                        swap(ara[j],ara[j+1]);
                        cnt++;
                    }
                }
            }
            for(int y=0;y<t;y++)
            cout<<ara[y];
            cout<<endl;
        cout<<"Minimum exchange operations : "<<cnt<<endl;
    }
    return 0;
}
