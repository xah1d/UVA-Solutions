#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,f;
    while(cin>>i>>f)
    {
        int ii=i,ff=f;

        long int max_cycle=0;
        for(int n=i; n<=f; n++)
        {
            int cycle=0;
            int k=n;
            while(k!=1)
            {

                cycle++;
                if(k%2!=0)
                {
                    k=3*k+1;
                }
                else
                {
                    k/=2;
                }

            }
            //cout<<"cycle for"<<n<<endl<<cycle<<endl;

            if(cycle>max_cycle)
                max_cycle=cycle;
        }
        cout<<ii<<" "<<ff<<" "<<max_cycle+1<<endl;
    }
    return 0;
}
