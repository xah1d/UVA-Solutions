#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    while(getline(cin,s))
    {
        if(s=="DONE")
            break;
        if(s[0]=='\0')
        {
           cout<<"You won't be eaten!"<<endl;
           continue;
        }

        vector<char>v;

        for(int i=0; i<s.size(); i++)
        {
            if(isalpha(s[i]))
            {
                if(isupper(s[i]))
                    s[i]=tolower(s[i]);


                v.push_back(s[i]);
            }
        }
        bool flag=true;
        //cout<<v.size()<<endl;

        for(int i=0,j=v.size()-1; i<v.size()/2; i++,j--)
            if(v[i]!=v[j])
            {
                flag=false;
                break;
            }

        if(flag)
            cout<<"You won't be eaten!"<<endl;
        else
            cout<<"Uh oh.."<<endl;
    }
    return 0;
}
