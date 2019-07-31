//d
#include<iostream>
using namespace std;
class A
{
	
			public:
				int x,y;
				void getdata()
				{
					cout<<"\n Enter value of x and y:\n"<<endl;
					cin>>x>>y;
				}
			};
	
class B:public A
{

	public:
	void product()
	{
	
	cout<<"product:"<<x*y<<endl;
	 }
};
class C:public A
{
	public:
		void sum()
		{
			cout<<"\n sum:"<<x+y<<endl;
		}
};

	

int main()
{
 B obj1;
 C obj2;
 obj1.getdata();
 obj1.product();
 obj2.getdata();
 obj2.sum();
	cout<<endl<<"Name:Puja Bhat"<<endl<<"Roll no:26";
	return 0;
}
