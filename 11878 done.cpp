#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,cnt=0,a,b,c;
	char ch,ch1;
	string s;
	while(cin>>a)
	{
	   cin>>ch>>b>>ch1>>s;
	   
	   if(s[0]=='?')
	   continue;
	        
	    else{
	        c=stoi(s);
	    }
	        //cout<<a<<ch<<b<<ch1<<c<<endl;
	   if(ch=='+'){
	        if(a+b==c){
	            //cout<<c<<endl;
	            cnt++;
	        }
	   }
	            
	   else{
	    if(a-b==c){
	        //cout<<c<<endl;
	        cnt++;
	    }
	   }
	        
	   
	 }
	cout<<cnt<<endl;
	return 0;
}