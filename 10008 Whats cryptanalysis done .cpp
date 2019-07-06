#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    cin.ignore();
    int a[26],tempa[26];
    memset(a,0,sizeof(a));
    
    while(tc--)
    {
        
        string s;
        
        getline(cin,s);
     
        for(int i=0;i<s.size();i++)
        {
            
           if(isalpha(s[i]))
           {
              if(islower(s[i]))
                    s[i]=toupper(s[i]);
               a[(int)(s[i]-65)]++; 
               
           }
        }
       
    }
    for(int i=0;i<=25;i++)
    {
        tempa[i]=a[i];
    }
    
    sort(tempa,tempa+26,greater<int>());
    for(int i=0;i<26;i++)
    {
        if(tempa[i]==0)
            break;
        for(int j=0;j<26;j++)
        {
            if(tempa[i]==a[j])
            {
                cout<<(char)(j+65)<<" "<<a[j]<<endl;
                a[j]=0;
            }
        }
        
    }

    
}