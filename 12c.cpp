//(b)wap to demonstrate parameterized constructor
#include<iostream>
using namespace std;
class test{
    int a,b;
public:
    test(int x)
    {
        a=x;
    }
    void showdata()
    {
        cout<<a;
    }

    };
    int main()
    {
        test obj=10;
        obj.showdata();
        cout<<endl<<"Puja Bhat"<<endl<<"Roll no:26";
        return 0;
    }
