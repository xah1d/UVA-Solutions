#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
   while(getline(cin,s))
   {
       int cnt=1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='/"')
            {
                if(cnt%2==0)
                cout<<"''";
                else
                cout<<"``";
                cnt++;
            }
            else
            cout<<s[i];

        }
        cout<<endl;
   }
}
