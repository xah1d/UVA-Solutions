#include<bits/stdc++.h>
using namespace std;

int digits(int n)
{
    int digit=log10(n)+1;
    return digit;
}


int main()
{
    int n1,n2,digit1,digit2;
    int ara1[11],ara2[11];
    while(cin>>n1>>n2)
    {
        if(n1==0 && n2==0)
        break;
        for(int i=0; i<11; i++)
        {
            ara1[i]=0;
            ara2[i]=0;
        }
        //digit1=digits(n1);
        //digit2=digits(n2);
        for(int i=10; i>=0; i--)
        {
            ara1[i]=n1%10;
            n1=n1/10;


        }

        for(int i=10; i>=0; i--)
        {
            ara2[i]=n2%10;
            n2=n2/10;


        }

        /* for(int k=0; k<=10; k++)
         {
             cout<<ara1[k];
         }
         cout<<endl;

         for(int k=0; k<=10; k++)
         {
             cout<<ara2[k];
         }
         cout<<endl;*/

        int carry=0,sum=0,cnt=0,i;
        for(int j=10; j>=0; j--)
        {

            if(ara1[j]+ara2[j]+carry>9)
            {
                sum=ara1[j]+ara2[j]+carry;
                cnt++;
                carry=1;

            }
            else
                carry=0;

        }
        if(cnt>0)
        {
            if(cnt==1)
            {
                cout<<cnt<<" carry operation."<<endl;
            }
            else if(cnt>1)
            {
                cout<<cnt<<" carry operations."<<endl;
            }
        }
        else if(cnt==0)
            cout<<"No carry operation."<<endl;
    }
    return 0;
}
