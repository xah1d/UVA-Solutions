#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0;
    string s,hajj="Hajj",umrah="Umrah";
    while(cin>>s)
    {
        i++;
        if(s[0]=='*')
            break;
        if(hajj==s)
            cout<<"Case "<<i<<": "<<"Hajj-e-Akbar"<<endl;
        else if(s==umrah)
            cout<<"Case "<<i<<": "<<"Hajj-e-Asghar"<<endl;

    }
    return 0;
}
