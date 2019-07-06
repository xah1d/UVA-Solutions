#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name1,name2;
    while(getline(cin,name1) && getline(cin,name2))
    {
        int n1=0,n2=0;
        for(int i=0; i<name1.size(); i++)
        {
            if(isalpha(name1[i]))
            {
                if(isupper(name1[i]))
                    name1[i] = tolower(name1[i]);
                n1+=name1[i]-96;
            }

        }

        for(int i=0; i<name2.size(); i++)
        {
            if(isalpha(name2[i]))
            {
                if(isupper(name2[i]))
                    name2[i]=tolower(name2[i]);
                n2+=name2[i]-96;
            }


        }

        int odn1=100;
        while(true)
        {
            int digit=log10(odn1)+1;

            if(digit == 1)
                break;
            odn1=0;
            while(n1)
            {
                odn1+=n1%10;
                n1/=10;
            }
            n1=odn1;
        }

        int odn2=100;

        while(true)
        {
            int digit=log10(odn2)+1;
            if(digit == 1)
                break;
            odn2=0;
            while(n2)
            {
                odn2+=n2%10;
                n2/=10;
            }
            n2=odn2;
        }
        //cout<<odn1<<" "<<odn2<<endl;
        double per= (min(odn1,odn2)*100.0)/max(odn1,odn2);
        printf("%.2lf %%\n",per);
    }

}
