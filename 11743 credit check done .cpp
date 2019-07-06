#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string s,ds;
        getline(cin,s);
        int j=0;
        vector<int>v;
        int sum1=0,sum2=0;
        //for(int i=0;i<s.size();i++)cout<<i<<" "<<s[i]<<endl;

        for(int i=0; i<s.size(); i=i+2)
        {

            if(isspace(#include<bits/stdc++.h>
                       using namespace std;

                       int main()
        {
            int n;
            cin>>n;
            cin.ignore();
                while(n--)
                {
                    string s,ds;
                    getline(cin,s);
                    int j=0;
                    vector<int>v;
                    int sum1=0,sum2=0;
                    //for(int i=0;i<s.size();i++)cout<<i<<" "<<s[i]<<endl;

                    for(int i=0; i<s.size(); i=i+2)
                    {

                        if(isspace(s[i]))
                        {
                            i-=1;
                            continue;
                        }


                        int tempdig=2*(s[i]-'0');
                        //cout<<tempdig<<" ";
                        if(tempdig>9)
                        {

                            sum2+=tempdig/10;
                            sum2+=tempdig%10;



                        }
                        else
                            sum2+=tempdig;

                        //cout<<sum2<<endl;

                    }
                    /*   for(int i=0;i<s.size();i++)
                           cout<<i<<" "<<s[i]<<endl;
                       cout<<endl;
                       cout<<" "<<s[6]-'0'<<endl;
                       */
                    sum1=s[1]-'0' + s[3]-'0' + s[6]-'0' + s[8]-'0' + s[11]-'0' + s[13]-'0' + s[16]-'0' + s[18]-'0';


                    //cout<<sum1<<" "<<sum2<<endl;
                    if((sum1+sum2)%10==0)
                        cout<<"Valid"<<endl;
                    else
                        cout<<"Invalid"<<endl;


                }
            }
            s[i]))
            {
                i-=1;
                continue;
            }


            int tempdig=2*(s[i]-'0');
            //cout<<tempdig<<" ";
            if(tempdig>9)
            {

                sum2+=tempdig/10;
                sum2+=tempdig%10;



            }
            else
                sum2+=tempdig;

            //cout<<sum2<<endl;

        }
        /*   for(int i=0;i<s.size();i++)
               cout<<i<<" "<<s[i]<<endl;
           cout<<endl;
           cout<<" "<<s[6]-'0'<<endl;
           */
        sum1=s[1]-'0' + s[3]-'0' + s[6]-'0' + s[8]-'0' + s[11]-'0' + s[13]-'0' + s[16]-'0' + s[18]-'0';


        //cout<<sum1<<" "<<sum2<<endl;
        if((sum1+sum2)%10==0)
            cout<<"Valid"<<endl;
        else
            cout<<"Invalid"<<endl;


    }
}
