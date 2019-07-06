#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int i,j,nmbr,sum=0;

    while(cin>>nmbr && nmbr!=0){
    int digit=log10(nmbr)+1;
    while(digit>1)
    {
        sum=0;
        for(i=1;i<=digit;i++)
        {
            sum=sum+nmbr%10;
            nmbr/=10;
        }
        nmbr=sum;
        digit=log10(nmbr)+1;
    }
    cout<<nmbr<<endl;
    }
    return 0;
}
