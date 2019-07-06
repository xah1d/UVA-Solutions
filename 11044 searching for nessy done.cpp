#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;

	    int height=n/3;
	    int width=m/3;

	    //cout<<height<<"*"<<width<<"=";
	    cout<<height*width<<endl;
	}
	return 0;
}
