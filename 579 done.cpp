#include<bits/stdc++.h>
using namespace std;
int main()
{
    int time[5];
    int hour,minute;
    char c;
    while(cin>>hour>>c>>minute)
    {

        if(hour==0 && minute==0)
            break;

        double angle=abs((hour*5-minute)*6+minute*.5);

        if(angle>180)
            angle=360-angle;
        cout<<setprecision(3)<<fixed<<angle<<endl;
    }
    return 0;

}
