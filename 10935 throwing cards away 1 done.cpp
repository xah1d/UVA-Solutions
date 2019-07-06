#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    while(cin>>n && n!=0)
    {
        cout<<"Discarded cards:";
        deque<int>dq;
        for(int i=1; i<=n; i++)
            dq.push_back(i);
        while(dq.size()>1)
        {
            cout<<" ";
            cout<<dq.front();
            dq.pop_front();
            dq.push_back(dq.front());
            dq.pop_front();
            if(dq.size()!=1)cout<<",";

        }
        cout<<endl<<"Remaining card: "<<dq.back()<<endl;

    }

}
