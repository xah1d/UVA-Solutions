#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int result;
        result=((((((n*567)/9)+7492)*235)/47)-498);
        int tenth=abs((result/10)%10);
        cout<<tenth<<endl;
    }
    return 0;
}
