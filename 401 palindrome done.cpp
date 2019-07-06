#include<bits/stdc++.h>
using namespace std;
bool ispal(string s)
{
    string temps=s;
    reverse(s.begin(),s.end());
    if(temps==s)
        return true;
    else
        return false;


}
bool ismirror(string s)
{
    bool flag=true;
    string temp=s;
    for(int i=0,j=temp.size()-1; i<s.size(),j>=0; j--, i++)
    {
        if(s[i]=='3' && temp[j]=='E');
        else if(s[i]=='E' && temp[j]=='3');
        else if(s[i]=='S' && temp[j]=='2');
        else if(s[i]=='2' && temp[j]=='S');
        else if(s[i]=='5' && temp[j]=='Z');
        else if(s[i]=='Z' && temp[j]=='5');
        else if(s[i]=='J' && temp[j]=='L');
        else if(s[i]=='L' && temp[j]=='J');


        else if(
            (s[i]=='A' || s[i]=='H' ||
             s[i]=='I' || s[i]=='M' ||
             s[i]=='O' || s[i]=='T' ||
             s[i]=='U' || s[i]=='V' ||
             s[i]=='W' || s[i]=='X' ||
             s[i]=='Y' || s[i]=='1' ||
             s[i]=='8' )&& s[i]==temp[j]);

        else
        {
            flag=false;
            //cout<<s[i]<<endl;

        }


    }
    //cout<<flag<<" "<<ispal(s)<<endl;
    if(flag)
        return true;
    else
        return false;

}
int main()
{
    string s;
    while(getline(cin,s))
    {
        string temps=s;
        if(ispal(s) )
        {
            if(ismirror(s))
                cout<<temps<<" -- is a mirrored palindrome."<<endl;
            else
                cout<<temps<<" -- is a regular palindrome."<<endl;

        }
        else if(ismirror(s))
            cout<<temps<<" -- is a mirrored string."<<endl;

        else
            cout<<temps<<" -- is not a palindrome."<<endl;

        cout<<endl;
    }
    return 0;
}
