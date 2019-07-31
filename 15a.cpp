//wap to demonstrate prefix operator using friend function overloading
#include<iostream>
using namespace std;
class prefix
{
private:
    int i,j,k;
public:
    prefix(int a,int b,int c)
    {
        i=a;
        j=b;
        k=c;
    }
    void showdata()
    {
        cout<<i<<endl<<j<<endl<<k;
    }
    friend void operator ++(prefix &d);
};
void operator ++(prefix &d)
{
    ++d.i;
    ++d.j;
    ++d.k;
}
int main()
{
    prefix o1(50,60,70);
    cout<<"Values of data member before increment operator:"<<endl;
    o1.showdata();
    ++o1;
    cout<<"\n values of data member after increment operator:"<<endl; 
    o1.showdata();
    cout<<endl<<"Puja Bhat"<<endl<<"Roll no:26";
    return 0;
}
