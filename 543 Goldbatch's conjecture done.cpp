#include<bits/stdc++.h>
using namespace std;

bool ara[1000000];
void sieve(long n)
{


    memset(ara,true,sizeof(ara));
    int root=(100000);
    for(int i=2; i<=root; i++)
    {
        if(ara[i]==true)
        {
            for(int j=i*2; j<=n; j=j+i)
            {
                ara[j]=false;
            }
        }
    }
   /* for(int i=2; i<=n; i++)
    {
        if(ara[i]==true)
            primes.push_back(i);
    }*/
    //for(int i=0; i<primes.size(); i++)cout<<primes[i]<<endl;
}

int main()
{
    long n;
    sieve(1000000);
    while(cin>>n && n!=0)
    {
        long p1=0,p2=0;

        for(int i=n/2,j=n/2; i<n,j>2; j--,i++)
        {
            if(ara[i]==true && ara[j]==true)
            {
                //cout<<"I"<<i<<"j"<<j<<endl;
                if(i+j==n)
                {

                    p1=j;
                    p2=i;
                }
            }



        }
        if(p1==0 && p2==0)
            cout<<"Goldbach's conjecture is wrong."<<endl;
        else
        cout<<n<<" = "<<p1<<" + "<<p2<<endl;
    }
}

