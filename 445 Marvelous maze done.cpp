
//tricky part is getting a empty string,recognizing it and print a new line
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    int repeat;
    while(getline(cin,s))
    {
        if(s[0]=='\0')
        {
            cout<<endl;
            continue;
        }
        for(int i=0;i<s.size();i++)
        {
            repeat=0;
          while(isdigit(s[i]))
          {
              repeat+=(int)s[i]-'0';
              i++;

          }
         // cout<<"repeat "<<repeat<<endl;
          if(s[i]=='b')
          {
              while(repeat--)
                cout<<" ";
          }
          else if(s[i]=='!')
            cout<<endl;
          else
          {
              while(repeat--)
                cout<<s[i];
          }

        }
        cout<<endl;
    }
    return 0;
}
