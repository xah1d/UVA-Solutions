#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    while(cin>>n)
    {
        t=n;
        int cola=0;
        while(n/3!=0)
        {
            cola=n/3+cola;
            n=n/3+n%3;

        }
        int rest_cola=n%3;
        int needed=3-rest_cola;
        if((rest_cola+needed)/3==needed)
            cola++;

        cout<<cola+t<<endl;
    }
}
