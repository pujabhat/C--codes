//a
#include<iostream>
using namespace std;

class base
{
	public:
		int x;
		void getdata()
		{
			cout<<"enter the value of x:"<<endl;
			cin>>x;
		}
};
class derive:public base
{
	private:
	int y;
	public:
	void readdata()
	{
		cout<<"enter the value of y:"<<endl;
		cin>>y;
	 }

	 void product()
	 {
	 	cout<<"product:"<<x*y<<endl;
	 }
};
int main()
{
	derive a;
	a.getdata();
	a.readdata();
	a.product();
	cout<<endl<<"Name:Puja Bhat"<<endl<<"Roll no:26";
	return 0;
}
