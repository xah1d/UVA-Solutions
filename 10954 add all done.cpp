//it can be easily solved by priority_queue

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n && n!=0)
    {
        priority_queue<long, vector<long>,greater<long> >pq; 
        long value;
        for(int i=0;i<n;i++)
        {
            cin>>value;
            pq.push(value);
        }
        long sum=0;
       while(pq.size()>1)
        {
            long tempsum=pq.top();
            
            pq.pop();
            tempsum+=pq.top();
            
            pq.pop();
            pq.push(tempsum);
            sum+=tempsum;
            
            
        }
        
        cout<<sum<<endl;
        
    }
    
}