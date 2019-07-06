#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;

}

int main()
{
    int n;

    while(cin>>n && n!=0)
    {
        long long int g=0;
        for(int i=1; i<n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                g=g+gcd(i,j);
            }
        }
        cout<<g<<endl;
    }
    return 0;


}
