#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,column,row;

    while(cin>>n && n!=0)
    {
        int mistake=0,cmistake=0;
        int ara[n+1][n+1];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>ara[i][j];


        for(int r=0;r<n;r++)
        {
            int sum=0;

            for(int c=0;c<n;c++)
            {
                sum=sum+ara[r][c];
            }
            if((sum%2)!=0)
            {
                mistake++;

                row=r+1;

            }
        }



        {
            for(int c=0;c<n;c++)
            {
                int sum=0;

                for(int r=0;r<n;r++)
                {
                    sum=sum+ara[r][c];
                }
                if((sum%2)!=0)
                {
                    cmistake++;
                    column=c+1;
                }
            }

        }
        if(mistake==1 && cmistake==1)
                cout<<"Change bit ("<<row<<","<<column<<")"<<endl;
        else if(mistake==0 && cmistake==0 )
            cout<<"OK"<<endl;
        else
            cout<<"Corrupt"<<endl;



    }
    return 0;
    }
