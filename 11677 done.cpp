#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,h2,m1,m2;
    int elapsedh,elapsedm;
    while(cin>>h1>>m1>>h2>>m2)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
        {
            break;
        }
        elapsedh=h2-h1;
        elapsedm=m2-m1;

        if(elapsedm<0)
        {
            elapsedm+=60;
            elapsedh-=1;
        }
        if(elapsedh<0)
        {
            elapsedh+=24;
        }
        int elapsedt=elapsedh*60+elapsedm;
        cout<<elapsedt<<endl;

    }
    return 0;
}
