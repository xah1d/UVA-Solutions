#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main()
{
    int marks[1001],i,t,students;
    cin>>t;
    while(t--)
    {
        int sum=0,count=0;
        cin>>students;
        for(i=0; i<students; i++)
        {
            cin>>marks[i];
            sum=sum+marks[i];
        }
        double average;
        average=sum/students;
        for(i=0;i<students;i++)
        {
            if(marks[i]>average)
                count++;
        }
        double percent;
        percent=(double)count*100/(double)students;
        //printf("%.3lf%\n",percent);
        cout<<setprecision(3)<<fixed;
        cout<<percent<<"%"<<endl;
    }
    return 0;}
