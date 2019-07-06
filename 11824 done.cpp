//UVa mimimum land
//X@hid
//31august2018


#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,ara[50];
    long long int l;
    cin>>t;
    while(t--)
    {
        double sum=0;
        long long int i=0;
        while(cin>>l && l!=0)
        {
            ara[i]=l;
            i++;

        }
        long long int length=i-1;
        sort(ara,ara+length+1);

        long long int j;
        for(long long int i=0,j=length+1;i<=length;j--,i++)
        {
            sum=sum+(2*pow(ara[i],j));
        }
        if(sum>5000000)
            cout<<"Too expensive"<<endl;
        else
            cout<<sum<<endl;


    }
    return 0;
}
