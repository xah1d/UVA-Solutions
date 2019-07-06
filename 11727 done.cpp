#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3,tc,cut;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        cin>>s1>>s2>>s3;
        if(s1>s2 && s1>s3)
        {
            if(s2>s3)
                cut=s2;
            else
                cut=s3;
        }
        if(s2>s1 && s2>s3)
        {
            if(s1>s3)
                cut=s1;
            else
                cut=s3;
        }
        if(s3>s2 && s3>s1)
        {
            if(s2>s1)
                cut=s2;
            else
                cut=s1;
        }
        cout<<"Case "<<i<<": "<<cut<<endl;
    }
}

