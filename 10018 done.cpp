//X@hid
//3sep18
#include<bits/stdc++.h>
using namespace std;

long int ulta(long int n)
{
   long int reversed=0;
   while(n>0)
   {
       reversed=reversed*10+n%10;
       n/=10;
   }
   return reversed;
}

int main()
{
  long int t,n,sum;
  cin>>t;
  while(t--)
  {
      long int cnt=0;

      cin>>n;
      long int temp=n;
      while(1)
      {

         n=ulta(n);
         if(n==temp && cnt>0)
            break;
         sum=temp+n;
         cnt++;
         n=sum;
         temp=sum;



      }
      cout<<cnt<<" "<<n<<endl;;
  }

return 0;
  }

