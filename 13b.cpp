#include<iostream>
using namespace std;
class demo
{
private:
    int  num;
    char ch;
public:
    demo setnum(int num)
    {
        this->num=num;
        return *this;
    }
    demo setch(char ch)
    {
        this->num++;
        this->ch=ch;
        return *this;
    }
    void displaymyvalues(){
    cout<<num<<endl;
    cout<<ch;
    }
};
int main()
{
    demo obj,obj1;
    obj1=obj.setnum(100).setch('X');
    obj1.displaymyvalues();
    cout<<endl<<"Puja Bhat"<<endl<<"Roll no:26";
    return 0;
}
