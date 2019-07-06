#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=0,a[101];
    while(cin>>t && t!=0)
    {
        j++;
        int sum=0,change=0;
        for(int i=0;i<t;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        int avrg=sum/t;
        for(int i=0;i<t;i++)
        {
            if(a[i]>avrg)
                change=change+(a[i]-avrg);
        }
        cout<<"Set #"<<j<<endl<<"The minimum number of moves is "<<change<<"."<<endl<<endl;
    }
    return 0;
}
