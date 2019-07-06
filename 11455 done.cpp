#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a==b && b==c && c==d)
            cout<<"square"<<endl;
        else if((a==b && c==d)||(a==c && b==d)||(a==d && c==b))
            cout<<"rectangle"<<endl;
        else if (a+b+c<=d || a+b+d<=c || a+d+c<=b ||d+b+c<=a)
            cout<<"banana"<<endl;
        else
            cout<<"quadrangle"<<endl;

    }
    return 0;
}

