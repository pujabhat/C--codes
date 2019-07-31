//(a) WAP to demonstrate overloading of <(less than) operator

#include<iostream>
using namespace std;
class Time{
int hr,min;
public:
void getdata()
{
    cout<<"Enter values of  hour and minutes"<<endl;
    cin>>hr>>min;
}
int operator <(Time t)
{
    int ft,st;
    ft=hr*60+min;
    st=t.hr*60+t.min;
if(ft<st)
    return 1;
else
    return 0;
}

};
int main()
{
    Time t1,t2;
    t1.getdata();
    t2.getdata();
    if(t1<t2)
        cout<<"T1 is less than t2"<<endl;
    else
        cout<<"T1 is greater than t2"<<endl;
        cout<<"Prabha Gharti Kshatri"<<endl<<"Roll no:21";
        return 0;

}
