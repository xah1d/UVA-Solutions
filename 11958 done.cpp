#include<bits/stdc++.h>
using namespace std;
long long int time(long int h1,long long int m1,long long int h2,long long int m2,long long int ttime)
{

    long long int elapsedh=h2-h1;
    long long int elapsedm=m2-m1;

        if(elapsedm<0)
        {
            elapsedm+=60;
            elapsedh-=1;
        }
        if(elapsedh<0)
        {
            elapsedh+=24;
        }
        long long int elapsedt=elapsedh*60+elapsedm+ttime;
        return elapsedt;
}
int main()
{
    int t;
    cin>>t;
    for(int c=1;c<=t;c++)
    {
        long long int buses,total_time,ttime,min_time;
        long long int ctimeh,ctimem,atimeh,atimem;
        char ch;
        cin>>buses>>ctimeh>>ch>>ctimem;
        for(int i=1;i<=buses;i++)
        {

            cin>>atimeh>>ch>>atimem>>ttime;

            int total_time=time(ctimeh,ctimem,atimeh,atimem,ttime);
            if(i==1)
                {min_time=total_time;}
            if(total_time<min_time)
                {min_time=total_time;}


        }

        cout<<"Case "<<c<<": "<<min_time<<endl;
    }
return 0;
}
