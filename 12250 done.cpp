#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t=0;
    while(cin>>s)
    {
        t++;
        if(s[0]=='#')
            break;
        if(s=="HOLA")
            cout<<"Case "<<t<<": "<<"SPANISH"<<endl;
        else if(s=="HELLO")
            cout<<"Case "<<t<<": "<<"ENGLISH"<<endl;
        else if(s=="BONJOUR")
             cout<<"Case "<<t<<": "<<"FRENCH"<<endl;
         else if(s=="HALLO")
             cout<<"Case "<<t<<": "<<"GERMAN"<<endl;
         else if(s=="ZDRAVSTVUJTE")
             cout<<"Case "<<t<<": "<<"RUSSIAN"<<endl;
         else if(s=="CIAO")
             cout<<"Case "<<t<<": "<<"ITALIAN"<<endl;
        else
            cout<<"Case "<<t<<": "<<"UNKNOWN"<<endl;

    }
    return 0;

}
