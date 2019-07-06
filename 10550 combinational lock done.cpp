/* the trick is when we rotate the dial clockwise,the number rotates anit-clockwise
So,we have to calculate inversely*/

#include<bits/stdc++.h>
using namespace std;
int clock(int initial,int destiny)
{
    return (destiny-initial+40)%40;
}
int counter_clock(int initial,int destiny)
{
    return (initial-destiny+40)%40;
}

int main()
{
    int i,one,two,three;
    while(cin>>i>>one>>two>>three)
    {
        if(i==0 && one==0 && two==0 && three==0)
            break;
       // cout<<counter_clock(i,one)<<" "<<clock(one,two)<<" "<<counter_clock(two,three)<<endl;
        int result=1080+counter_clock(i,one)*9+clock(one,two)*9+counter_clock(two,three)*9;
        cout<<result<<endl;
    }
}
