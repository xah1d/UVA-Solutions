#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    int cd,cm,cy,bd,bm,by,result,age;
    char ch,ch1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cin>>cd>>ch>>cm>>ch1>>cy;
        scanf("%d %c %d %c %d",&cd,&ch,&cm,&ch1,&cy);
        cin>>bd>>ch>>bm>>ch1>>by;
        int age=cy-by;

            if(cm<bm)
                age=age-1;
            else if(cm==bm && cd<bd)
                age=age-1;
        if(age==0)
            cout<<"Case #"<<i<<": "<<"0"<<endl;
        else if(age>130)
             cout<<"Case #"<<i<<": "<<"Check birth date"<<endl;

        else if(age<0)
            cout<<"Case #"<<i<<": "<<"Invalid birth date"<<endl;
        else
            cout<<"Case #"<<i<<": "<<age<<endl;

        //cout<<age<<endl;
    }
    return 0;
}
