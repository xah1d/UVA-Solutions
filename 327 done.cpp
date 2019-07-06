#include<bits/stdc++.h>
using namespace std;
int time(int h1,int m1,int h2,int m2,int ttime)
{

    int elapsedh=h2-h1;
    int elapsedm=m2-m1;

        if(elapsedm<0)
        {
            elapsedm+=60;
            elapsedh-=1;
        }
        if(elapsedh<0)
        {
            elapsedh+=24;
        }
        int elapsedt=elapsedh*60+elapsedm+ttime;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int buses,total_time,ctimeh,ctimem,atimeh,atimem,ttime,min_time;
        char ch;
        cin>>buses>>ctimeh>>ch>>ctimem;
        for(int i=1;i<=buses;i++)
        {
            cout<<"bus no--"<<buses<<endl;
            cout<<"i no--"<<i<<endl;
            cin>>atimeh>>ch>>atimem>>ttime;

            int total_time=time(ctimeh,ctimem,atimeh,atimem,ttime);
            if(i==1)
                {min_time=total_time;}
            if(total_time<min_time)
                {min_time=total_time;}

            cout<<"min time--"<<min_time<<endl;
        }

        cout<<min_time<<endl;
    }
return 0;
}
