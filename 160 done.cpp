#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
void sieve()
{

    int n=100;

    bool ara[n+1];
    memset(ara,true,sizeof(ara));
    int root=sqrt(n);
    for(int i=2;i<=root;i++)
    {
        if(ara[i]==true)
        {
            for(int j=i*2;j<=n;j=j+i)
            {
                ara[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(ara[i]==true)
            primes.push_back(i);
    }
    for(int i=0;i<primes.size();i++)
        cout<<primes[i]<<endl;


}
int main()
{
    int n;
    sieve();
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        printf("%3d! =",n);
        for(int i=0;i<primes.size();i++)
        {
            int temp=n,sum=0,p=1;

            while(1)
            {
                int tempsum=temp/pow(primes[i],p);
                if(tempsum==0)
                    break;
                sum+=tempsum;
                p++;

            }
            if(sum>0)
                //cout<<primes[i]<<"->"<<sum<<"  ";
                cout<<" "<<sum;

        }
       // cout<<"success"<<endl;
        cout<<"\n";

    }
    return 0;
}
