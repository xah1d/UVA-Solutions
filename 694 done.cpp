#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n,l;

    int kase=0;
    while(cin>>n>>l)
    {
        int terms=0;
        if(n<0 && l<0)
            break;
        ll orgn=n;
        kase++;
        while(true)
        {

            if(n>l)
                break;
            terms++;
            if(n==1)
                break;
            else if(n%2==0)
                n/=2;
            else
                n=3*n+1;
        }

        cout<<"Case "<<kase<<": A = "<<orgn<<", limit = "<<l<<", number of terms = "<<terms<<endl;


    }
}
