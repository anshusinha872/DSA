#include<iostream>
using namespace std;
string dayOfprogrammer(int year)
{
    if(year<=1917 && year>=1700)
    {
        if(year%4==0)
        {
            // cout<<"leap year1"<<endl;
            string str;
            int arr[12]={31,29,31,30,31,30,31,31,30,31,30,31};
            int sum=0;
            int month=0;
            int day =0;
            int i=0;
            while(sum<=256)
            {
                sum+=arr[i];
                i++;
                month++;
            }
            // cout<<"sum is "<<sum<<endl;
            sum=sum-arr[i-1];
            day = 256-sum;
            // cout<<"sum is "<<sum<<endl;
            if(day<10)
            {
                str="0"+to_string(day)+".";
                // cout<<"0"<<day<<".";
            }
            else
            {
                str= to_string(day)+".";
                // cout<<day<<".";
            }    
                
            if(month<10)
            {
                str = str + "0"+ to_string(month)+"."+to_string(year);
                // cout<<"0"<<month<<"."<<year;
                return str;
            }
            else
            {
                str = str + to_string(month)+"."+to_string(year);
                // cout<<month<<"."<<year;
                return str;
            }
        }
        else
        {
            // cout<<"not leap year2"<<endl;
            string str;
            int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
            int sum=0;
            int month=0;
            int day =0;
            int i=0;
            while(sum<=256)
            {
                sum+=arr[i];
                i++;
                month++;
            }
            // cout<<"sum is "<<sum<<endl;
            sum=sum-arr[i-1];
            // cout<<"sum is "<<sum<<endl;
            day = 256-sum;
            if(day<10)
            {
                str="0"+to_string(day)+".";
                // cout<<"0"<<day<<".";
            }
            else
            {
                str= to_string(day)+".";
                // cout<<day<<".";
            }    
                
            if(month<10)
            {
                str = str + "0"+ to_string(month)+"."+to_string(year);
                // cout<<"0"<<month<<"."<<year;
                return str;
            }
            else
            {
                str = str + to_string(month)+"."+to_string(year);
                // cout<<month<<"."<<year;
                return str;
            }
        }
        
    }
    else if(year==1918)
    {
        string str;
            int arr[12]={31,15,31,30,31,30,31,31,30,31,30,31};
            int sum=0;
                int month=0;
                int day =0;
                int i=0;
                while(sum<=256)
                {
                    sum+=arr[i];
                    i++;
                    month++;
                }
                // cout<<"sum is "<<sum<<endl;
                sum=sum-arr[i-1];
                day = 256-sum;
                // cout<<"sum is "<<sum<<endl;
                if(day<10)
                {
                    str="0"+to_string(day)+".";
                    // cout<<"0"<<day<<".";
                }
                else
                {
                    str= to_string(day)+".";
                    // cout<<day<<".";
                }    
                    
                if(month<10)
                {
                    str = str + "0"+ to_string(month)+"."+to_string(year);
                    // cout<<"0"<<month<<"."<<year;
                    return str;
                }
                else
                {
                    str = str + to_string(month)+"."+to_string(year);
                    // cout<<month<<"."<<year;
                    return str;
                }
    }
    else 
    {
        if((year % 400==0) ||((year%4==0) &&!(year %100 ==0)) )
        {
            // cout<<"leap year3"<<endl;
            string str;
            int arr[12]={31,29,31,30,31,30,31,31,30,31,30,31};
            int sum=0;
                int month=0;
                int day =0;
                int i=0;
                while(sum<=256)
                {
                    sum+=arr[i];
                    i++;
                    month++;
                }
                // cout<<"sum is "<<sum<<endl;
                sum=sum-arr[i-1];
                day = 256-sum;
                // cout<<"sum is "<<sum<<endl;
                if(day<10)
                {
                    str="0"+to_string(day)+".";
                    // cout<<"0"<<day<<".";
                }
                else
                {
                    str= to_string(day)+".";
                    // cout<<day<<".";
                }    
                    
                if(month<10)
                {
                    str = str + "0"+ to_string(month)+"."+to_string(year);
                    // cout<<"0"<<month<<"."<<year;
                    return str;
                }
                else
                {
                    str = str + to_string(month)+"."+to_string(year);
                    // cout<<month<<"."<<year;
                    return str;
                }
        }
        else
        {
            // cout<<"not leap year4"<<endl;
            string str;
            int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
            int sum=0;
            int month=0;
            int day =0;
            int i=0;
            while(sum<=256)
            {
                sum+=arr[i];
                i++;
                month++;
            }
            // cout<<"sum is "<<sum<<endl;
            sum=sum-arr[i-1];
            // cout<<"sum is "<<sum<<endl;
            day = 256-sum;
            if(day<10)
            {
                str="0"+to_string(day)+".";
                // cout<<"0"<<day<<".";
            }
            else
            {
                str= to_string(day)+".";
                // cout<<day<<".";
            }    
                
            if(month<10)
            {
                str = str + "0"+ to_string(month)+"."+to_string(year);
                // cout<<"0"<<month<<"."<<year;
                return str;
            }
            else
            {
                str = str + to_string(month)+"."+to_string(year);
                // cout<<month<<"."<<year;
                return str;
            }
        }
    }
    
}

int main()
{
    int year;
    cin>>year;
    cout<<dayOfprogrammer(year);
    return 0;
}