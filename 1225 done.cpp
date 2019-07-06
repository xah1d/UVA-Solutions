//update:can be used by array also instead of using one zero....
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            int o=i;
            int digit=log10(o)+1;
            while(digit!=0)
            {
                switch(o%10)
                {
                case 1:
                    one++;
                    break;
                case 2:
                    two++;
                    break;
                case 3:
                    three++;
                    break;
                case 4:
                    four++;
                    break;
                case 5:
                    five++;
                    break;
                case 6:
                    six++;
                    break;
                case 7:
                    seven++;
                    break;
                case 8:
                    eight++;
                    break;
                case 9:
                    nine++;
                    break;
                case 0:
                    zero++;
                    break;
                }
                o/=10;
                digit--;
            }

        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",zero,one,two,three,four,five,six,seven,eight,nine);
    }
    return 0;
}
