#include<bits/stdc++.h>
using namespace std;

int main()
{
    int temp,j;
    string s;

    while(getline(cin,s))
    {
        for(int i=0; i<=s.size(); i++)
        {
            for(j=i; j<=s.size(); j++)
            {
                if(s[j]==' ' || s[j]=='\0')
                {
                    //cout<<j<<endl;
                   for(temp=j-1; temp>=i; temp--)
                        cout<<s[temp];
                        break;
                }


            }
            if(s[j]!='\0' && s[i]!='\0')
                cout<<" ";
            i=j;
        }
        cout<<endl;
    }

    return 0;
}