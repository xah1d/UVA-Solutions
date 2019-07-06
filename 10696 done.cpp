#include<bits/stdc++.h>
using namespace std;
int f91(long int n)
{
    long long int result;
    if(n<=100)
        result=f91(f91(n+11));
    else
        result=n-10;
    return result;
}
int main()
{
    long int result,n;
    while(cin>>n && n!=0)
    {
       cout<<"f91("<<n<<") = "<<f91(n)<<endl;
    }
    return 0;

}
