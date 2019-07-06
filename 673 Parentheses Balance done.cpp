//It is a standard stack problem.It can be done easily with STL Stack.I gave a lot of effort to solve this without a stack.

#include<bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
int main()
{

    int tc;
    cin>>tc;
    cin.ignore();
    while(tc--)
    {
        vector <char> open,close;
        string s;
        getline(cin,s);
        if(s.empty())
        {
            cout<<"Yes"<<endl;
            continue;
        }

        bool flag=true;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(' || s[i]=='[')
            {
                open.pb(s[i]);

            }

            else if(s[i]==')')
            {


                if(open.empty() || open[open.size()-1]!='(' )
                {
                    flag=false;
                    break;
                }
                else
                    open.pop_back();


            }
            else if(s[i]==']')
            {
                if(open.empty() || open[open.size()-1]!='[')
                {
                   flag=false;
                    break;
                }
                else
                    open.pop_back();
            }
            //if(!open.empty())cout<<open[open.size()-1]<<'\n';


        }
        if(flag && open.empty())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;


       // cout<<open.size()<<" "<<close.size()<<endl;
        //for(int i=0; i<open.size(); i++)cout<<open[i]<<" ";cout<<endl;
        //for(int i=0; i<close.size(); i++)cout<<close[i]<<" ";cout<<endl;


    }

}
