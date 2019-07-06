#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,cnt=0,ara[1001];
	while(cin>>n && n!=0)
	{
	    cnt++;
	    int party=0,treat=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>ara[i];
	        if(ara[i]==0)
	            treat++;
	       else 
	            party++;    
	    }
	    int balance=party-treat;
	    cout<<"Case "<<cnt<<": "<<balance<<endl;
	}
	return 0;
}