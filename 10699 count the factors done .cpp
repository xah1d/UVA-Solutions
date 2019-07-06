#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;

    while(cin>>n && n!=0)
    {
        vector <int> v;
        int pf=0,org;
        org=n;
        while(n%2==0)
        {
            v.push_back(2);
            n/=2;
        }
        for(int i=3; i<=sqrt(n); i=i+2)
        {
            while(n%i==0)
            {
            v.push_back(i);
                n=n/i;

            }
        }
        if(n>2)
            v.push_back(n);
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=v[i-1])
                pf++;
        }

        printf("%ld : %d\n",org,pf);
    }
    return 0;
}