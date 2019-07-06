//solved after many hours though it should have been solved within minutes
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s,sum;
    int cnt=0;
    sum="0";
    int extra=0;
    while(cin>>s && s!= "0")
    {
        int temp;

        reverse(s.begin(),s.end());

        if(sum.size()>=s.size())
        {
            int carry=0;
            for(int i=0,j=0; i<sum.size(),j<s.size(); i++,j++)
            {
                temp = sum[i]-'0'+ carry+ s[j]-'0';
                sum[i]=temp%10 + '0';
                carry=temp/10;

            }

            if(carry>0)
            {
                extra=extra+carry;


            }
        }


        else
        {
            int carry=0;

            for(int i=s.size()-1,j=sum.size()-1; j>=0; i--,j--)
            {

                temp = s[i]-'0'+ carry + sum[j]-'0';
                s[i]= temp%10 + '0';
                carry=temp/10;

            }
            if(carry>0)
            {

                extra+=carry;

            }
            sum=s;

        }

    }
    if(extra>0)
        cout<<extra;
    for(int i=sum.size()-1; i>=0; i--)
        cout<<(int)sum[i]-'0';
    cout<<endl;
}



