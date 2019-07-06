#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        if(s=="0")
            break;
        long sum=0,p=1;
        for(int i=s.size()-1;i>=0;i--)
        {

            int temp=s[i]-'0';

            sum+=temp*(pow(2,p++)-1);

        }
        cout<<sum<<endl;
    }
}
