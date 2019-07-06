#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tea;
    while(cin>>tea)
    {
        int i,a[6],cnt=0;
        for(i=0;i<5;i++)
        {
            cin>>a[i];
            if(a[i]==tea)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
