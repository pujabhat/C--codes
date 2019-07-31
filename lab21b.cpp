//b
#include<iostream>
using namespace std;
class A
{
	private:
		int a;
		protected:
			int x;
			public:
				void setval(int v)
				{
					x=v;
				}
			};
	
class B:private A
{

	public:
	void printval(void)
	{
	setval(10);
	cout<<"Value of x:"<<x<<endl;
	 }
};

	

int main()
{
 B objB;
 objB.printval();
	cout<<endl<<"Name:Puja Bhat"<<endl<<"Roll no:26";
	return 0;
}
