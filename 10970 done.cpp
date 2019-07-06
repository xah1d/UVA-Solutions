#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,column,result;
    while(cin>>row>>column)
    {
        if(column>row)
            result=column-1+column*(row-1);
        else
            result=row-1+row*(column-1);

        cout<<result<<endl;


    }
    return 0;
}
