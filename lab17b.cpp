//(a)wap to overload <,> and == operator considering is class 'Money' having data member 'rupee' and 'paisa';

#include<iostream>
using namespace std;
class Money{
int rupee,paisa;
public:
void getdata()
{
    cout<<"Enter rupee and paisa"<<endl;
    cin>>rupee>>paisa;
}
int operator <(Money m)
{
    int ft,st;
    ft=rupee*100+paisa;
    st=m.rupee*100+m.paisa;
    if(ft<st)
        return 1;
        else
        return 0;
}
int operator >(Money m)
{
    int ft,st;
    ft=rupee*100+paisa;
    st=m.rupee*100+m.paisa;
    if(ft>st)
        return 1;
        else
        return 0;

}
int operator ==(Money m)
{
    int ft,st;
    ft=rupee*100+paisa;
    st=m.rupee*100+m.paisa;
    if(ft==st)
        return 1;
        else
        return 0;

}
};
int main()
{
    Money m1,m2;
    m1.getdata();
    m2.getdata();
    cout<<"For '<' operator:"<<endl;
    if(m1<m2)
        cout<<"m1 is lesser than m2"<<endl;
    else
        cout<<"m1 is greater than m2"<<endl;
        cout<<"For '>' operator:"<<endl;
    if(m1>m2)
        cout<<"m1 is greater than m2"<<endl;
    else
        cout<<"m1 is less than m2"<<endl;
         cout<<"For '==' operator:"<<endl;
         if(m1==m2)
        cout<<"m1 is equals to m2"<<endl;
    else
        cout<<"m1 is not equals to m2"<<endl;
        cout<<"Prabha Gharti Kshatri"<<endl<<"Roll no:21";
        return 0;
}
