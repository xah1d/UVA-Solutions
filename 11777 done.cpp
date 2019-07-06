#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,t1,t2,ct1,ct2,ct3,ct,final,ac;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>t1>>t2>>final>>ac>>ct1>>ct2>>ct3;
        if(ct1<ct3 && ct1<ct2)
        {
            ct=(ct2+ct3)/2;
        }
        else if(ct2<ct1 && ct2<ct3)
        {
            ct=(ct1+ct3)/2;
        }
        else if(ct3<ct1 && ct3<ct2)
        {
            ct=(ct1+ct2)/2;
        }
        else if(ct1==ct2)
            ct=(ct3+ct2)/2;
        else
            ct=(ct1+ct2)/2;

        int result=final+t1+t2+ac+ct;
        if(result>=90)
            cout<<"Case "<<i<<": A"<<endl;
        else if(result>=80 && result<90)
            cout<<"Case "<<i<<": B"<<endl;
        else if(result>=70 && result<80)
            cout<<"Case "<<i<<": C"<<endl;
        else if(result>=60 && result<70)
            cout<<"Case "<<i<<": D"<<endl;
        else
            cout<<"Case "<<i<<": F"<<endl;


    }
return 0;
}
