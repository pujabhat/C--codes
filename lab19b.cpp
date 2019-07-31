#include<iostream>
using namespace std;
class Distance
{
    int feet,inches;
    public:
    Distance()
    {
        
    }
    Distance(float m)
    {
        feet=int (m);
        inches=12*(m-feet);
    }
    void display()
    {
        cout<<"Feet:"<<feet<<endl;
        cout<<"inches:"<<inches<<endl;
    }
};
    int main()
    {
        float len;
        Distance d;
        cout<<"enter length "<<endl;
        cin>>len;
        d=len;
        d.display();
        cout<<endl<<"Puja Bhat"<<endl<<"Roll no:26";
        return 0;
    }
    


