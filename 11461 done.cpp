#include<iostream>
#include<cmath>
using namespace std;
bool issqr(int n)
{
    double root;
    root=sqrt(n);
    if(ceil(root)==floor(root))
        return true;
    else
        return false;

}
int main()
{
    long int i,f;
    while(cin>>i>>f)
    {
        int cnt=0,j;
        if(i==0 && f==0)
            break;

        for(j=i;j<=f;j++)
        {
            if(issqr(j))
                cnt++;
        }
        cout<<cnt<<endl;

    }
    return 0;
}
