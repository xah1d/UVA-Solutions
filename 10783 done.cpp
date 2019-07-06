#include<iostream>

using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int c=1;c<=t;c++)
    {
        int a,b,sum=0;
        cin>>a>>b;
        if(a%2==0)
            a+=1;
        for(int i=a;i<=b;i+=2)
        {
            sum=sum+i;
        }
        cout<<"Case "<<c<<": "<<sum<<endl;

    }
    return 0;
}
