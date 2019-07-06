//based on uva 11150-cola,
//that's why variables are messed up.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k;
    while(cin>>n>>k)
    {
        t=n;


        int cola=0;
        while(n/k!=0)
        {

            cola=n/k+cola;
            n=n/k+n%k;

        }
        /*int rest_cola=n%k;
        int needed=k-rest_cola;
        if((rest_cola+needed)/k==needed)
            cola++;
        */
        cout<<cola+t<<endl;
    }
}
