#include <bits/stdc++.h>
using namespace std;
#define div 11
int main() {
	string s;
	while(cin>>s)
	{
	    int temp=0,i=0,len=s.size();
	    if(len==1 && s=="0")
	        break;
	    while(i<len)
	    {
	        int num=s[i]-'0' + temp*10;
	        //cout<<"num "<<num<<endl;
	        while(num<div)
	        {
	            //cout<<"num first "<<num<<endl;
	            if(i>=len-1)
	                break;
	            num=num*10+s[++i]-'0';
	             //cout<<"num last "<<num<<endl;
	        }
	        //cout<<"num "<<num<<endl;
	        temp=num%div;
	        i++;
	        //cout<<"temp "<<temp<<endl;
	    }
	    if(temp==0)
	        cout<<s<<" is a multiple of 11."<<endl;
	   else
	        cout<<s<<" is not a multiple of 11."<<endl;
	       
	}
	return 0;
}