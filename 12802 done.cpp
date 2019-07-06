
#include<bits/stdc++.h>
using namespace std;

typedef long int l;
bool ara[1000000];

bool ispal(l n)
{
    l reversed=0;
    l temp=n;
    while(temp)
    {
        reversed=reversed*10+temp%10;
        temp/=10;
    }

    if(reversed==n)
        return true;
    else
        return false;

}
void prime()
{
    memset(ara,1,sizeof(ara));
    for(int i=2; i*i<=1000000; i++)
    {
        if(ara[i]==true)
        {
            for(int j=i*2; j<=1000000; j=j+i)
            {
                ara[j]=false;
            }
        }
    }
}

int main()
{
    l n;
    memset(ara,true,sizeof(ara));
    prime();
    while(cin>>n)
    {
        cout<<n*2<<endl;
        //for(l y=0; y<=n; y++)cout<<ara[y]<<endl;

        if(ispal(n) && ara[n])
            break;

    }

    return 0;
}

