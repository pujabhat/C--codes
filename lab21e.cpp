//e
#include<iostream>
using namespace std;
class A
{

			public:
					int x;
				void getdata()
				{
				cout<<"\n enter the value of x:\n"<<endl;
				cin>>x;
				}
			};
	
class B
{

	public:
	int y;
	void getvalue()
	{
		cout<<"\n enter the value of y:\n"<<endl;
				cin>>y;
	 }
};
class C:public A,public B
{
	public:
	void sum()
	{
		cout<<"sum:"<<x+y<<endl;
	}
};
	

int main()
{
 C obj2;
 obj2.getdata();
 obj2.getvalue();
 obj2.sum();
	cout<<endl<<"Name:Puja Bhat"<<endl<<"Roll no:26";
	return 0;
}
