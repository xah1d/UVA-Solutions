//Age sort
//X@hid
//1september2018

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long int>v;
    long int n;
    while(cin>>n && n!=0)
    {

        for(long int i=0; i<n; i++)
        {
            long int number;
            cin>>number;
            v.push_back(number);

        }

        sort(v.begin(),v.end());
        for(long int i=0; i<n; i++)
        {
            if(i==n-1)
                cout<<v[i];
            else
            cout<<v[i]<<" ";
        }
        cout<<endl;
        v.clear();
    }
    return 0;
}


