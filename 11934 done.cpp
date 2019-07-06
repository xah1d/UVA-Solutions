//Magic Formula
//X@hid
//30august2018

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,c,d,l;
    while(cin>>a>>b>>c>>d>>l)
    {
        int cnt=0;
        if(a==0 && b==0 && c==0 && d==0)
            break;
        for(int x=0;x<=l;x++)
        {
           long int f=a*x*x+b*x+c;
           if(f%d==0)
            cnt++;

        }
        cout<<cnt<<endl;
    }
    return 0;
}
