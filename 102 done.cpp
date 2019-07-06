#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int b1,c1,g1,b2,b3,g2,g3,c2,c3,m,temp;
    char str[5];
    while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3)
    {

        temp=b2+b3+c1+c3+g1+g2;


        strcpy(str,"BCG");
         m=temp;

        temp=b2+b3+g1+g3+c1+c2;
        if(temp<m)
        {
            strcpy(str,"BGC");
            m=temp;
        }

        if((c2+c3+b1+b3+g1+g2)<m)
        {
            strcpy(str,"CBG");
            m=c2+c3+b1+b3+g1+g2;
        }

        if((c2+c3+g1+g3+b1+b2)<m)
        {
            strcpy(str,"CGB");
            m=c2+c3+g1+g3+b1+b2;
        }

        if((g2+g3+b1+b3+c1+c2)<m)
        {
            strcpy(str,"GBC");
            m=g2+g3+b1+b3+c1+c2;
        }
        if((g2+g3+c1+c3+b1+b2)<m)
        {
            strcpy(str,"GCB");
            m=g2+g3+c1+c3+b1+b2;
        }
        cout<<str<<" "<<m<<endl;
    }


return 0;
}


