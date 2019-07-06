#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=0,ara[100000];
    int median=0;
    while(cin>>n)
    {
        ara[t++]=n;
        sort(ara,ara+t);

        //for(int i=0;i<t;i++)cout<<" "<<ara[i]<<endl;

        if(t%2==0)
        {
            //cout<<"t--"<<t<<"first--"<<ara[t/2]<<"second--"<<ara[(t/2)-1]<<endl;
            median = (ara[t/2] + ara[(t/2)-1])/2;
        }
        else
        {
           //cout<<"only--"<<ara[t/2]<<endl;
            median=ara[t/2];
        }

        cout<<median<<endl;
    }

}
