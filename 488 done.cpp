#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,f,a,t;
    scanf("%d",&t);

    while(t--)
    {
        cin>>a;

        cin>>f;
        while(f--)
        {
            for(i=1;i<=a;i++)
            {
              for(int j=1;j<=i;j++)
              {
                  cout<<i;
              }
              cout<<endl;
            }

            for(i=a-1;i>0;i--)
            {
                for(j=1;j<=i;j++)
                    cout<<i;
                cout<<endl;
            }
            if(f)
            cout<<endl;

        }
        if(t)
            cout<<endl;
    }
return 0;
}
