#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a==-1 && b==-1)
            break;

        int result1=abs(a-b);

        int result2=100-result1;
        if(result1<result2)
            cout<<result1<<endl;
        else
            cout<<result2<<endl;

    }
    return 0;
}
