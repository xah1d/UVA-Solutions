#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,u,d,f;
    while(cin>>h>>u>>d>>f && h!=0)
    {
        double climb=0;int cnt=0;
        double fat=(double)(f/100.0)*u;
        //cout<<fat<<endl;
        while(1)
        {

            climb=(double)climb+u;
            u=u-fat;
            if(u<0)
                u=0;
            cnt++;
            //cout<<climb<<endl;
            if(climb>h || climb<0)
                break;
            climb=climb-d;
            if(climb>h || climb<0)
                break;

        }

        if(climb<0)
            cout<<"failure on day "<<cnt<<endl;
        else
        {
            cout<<"success on day "<<cnt<<endl;
        }
    }
}
