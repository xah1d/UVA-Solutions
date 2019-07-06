#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    vector<string>name;
    cin>>n;
    for(int t=0;t<n;t++)
    {
        cin>>s;
        name.push_back(s);
    }
    vector<string>wish;
    wish.push_back("Happy");
    wish.push_back("birthday");
    wish.push_back("to");
    wish.push_back("you");

    wish.push_back("Happy");
    wish.push_back("birthday");
    wish.push_back("to");
    wish.push_back("you");

    wish.push_back("Happy");
    wish.push_back("birthday");
    wish.push_back("to");
    wish.push_back("Rujia");

    wish.push_back("Happy");
    wish.push_back("birthday");
    wish.push_back("to");
    wish.push_back("you");

    bool name_done=false,wish_done=false;
    int i,j;
    for(i=0,j=0;i<n;i++,j++)
    {
        //cout<<"success "<<j<<endl;
        if(j==16)
        {
            j=0;
        }
        cout<<name[i]<<": "<<wish[j]<<endl;

    }


    if(j<15)
    {
        for(i=0,j;j<16;j++,i++)
        {
            if(i==n)
                i=0;
            cout<<name[i]<<": "<<wish[j]<<endl;

        }

    }
}
