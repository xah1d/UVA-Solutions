#include<bits/stdc++.h>
using namespace std;
#define asize 1000000

bool ara[asize];
void sieve()   //if prime then true;
{
    int n;
    memset(ara,true,sizeof(ara));
    int root=sqrt(asize);
    for(int i=2;i<=root;i++)
    {
        if(ara[i]==true)
        {
            for(int j=i*2;j<=asize;j=j+i)
            {
                ara[j]=false;
            }
        }
    }
    //cout<<"success"<<endl;
    //for(int i=0;i<=100;i++)cout<<i<<" "<<ara[i]<<endl;


    return;

}

int main()
{
    sieve();
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        bool flag=false;
        int i;
        for(i=2;i<=n/2;i++)
        {
            if(ara[i] && ara[n-i])
            {
                flag=true;
                break;
            }
        }
        cout<<n<<":\n";
        if(flag)
            cout<<i<<"+"<<n-i<<"\n";
        else
            cout<<"NO WAY!\n";

    }


}
