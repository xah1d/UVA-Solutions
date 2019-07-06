#include<bits/stdc++.h>
#include<iterator>

using namespace std;
int main()
{
    int ara[32000];
    long long int n;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>n && n!=0)
    {
        int i,j=0,sum=0;
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
            {
                ara[j]=i;
                j++;
            }
        }

        for(i=0;i<j;i++)
            sum=sum+ara[i];


        if(sum==n){
            cout<<right<<setw(5)<<n;
            cout<<"  PERFECT"<<endl;
        }
        else if(sum<n){
            cout<<right<<setw(5)<<n;
            cout<<"  DEFICIENT"<<endl;
        }
        else if(sum>n){
            cout<<right<<setw(5)<<n;
            cout<<"  ABUNDANT"<<endl;
        }
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}

