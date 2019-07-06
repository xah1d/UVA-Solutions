///It's all about pre-computation and little bit of optimization as seen 58th line..

#include<bits/stdc++.h>
using namespace std;
//vector<int>primes;
#define asize 1000000
int nof[asize+2];

bool ara[asize+2];
void sieve()            //typical sieve and saved the primes in vector
{
    int n=asize;
    memset(ara,true,sizeof(ara));
    int root=sqrt(n)+1;
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
    }
    */
    //for(int i=0;i<primes.size();i++)cout<<primes[i]<<endl;



}
int factors(int n)          //find the number of factors for a specific number
{
    int root=sqrt(n)+1,res=0;
    for(int i=2;i<=root;i++)
    {
        if(ara[i])
            while(n%i==0)
            {
                res++;
                n/=i;
            }
    }
    if(n>1)
        res++;
    return res;

}
void no_of_factors()            //precomputing the results..
{
    nof[2]=1;
    for(int i=3;i<=asize;i++)
    {
        nof[i]=nof[i-1]+factors(i);      //calling factor function for each number from 2 to asize

    }
}
int main()
{
    int n;
    sieve();
    no_of_factors();

    while(cin>>n)
    {
        cout<<nof[n]<<"\n";

    }
    return 0;
}

