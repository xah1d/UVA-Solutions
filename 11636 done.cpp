#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j=0;
    while(cin>>n && n>=0)
    {
        j++;
        int cnt=0,i=1,sum=0;
        while(sum<n)
        {
            sum=i+sum;
            i=sum;
            cnt++;
        }
        cout<<"Case "<<j<<": "<<cnt-1<<endl;

    }
    return 0;
}
