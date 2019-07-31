//13(a).wap to demonstrate the use of 'this' pointer to resolve name conflict between local variable and instance variable.
#include<iostream>
using namespace std;
class test
{
int x;
public:
void setx(int x)
{
this->x=x;
}
void showdata()
{
cout<<"The value of x is:"<<x;
}
};
int main()
{
test obj;
obj.setx(12);
obj.showdata();
cout<<endl<<"Puja Bhat"<<endl<<"Roll no:26";
return 0;
}
