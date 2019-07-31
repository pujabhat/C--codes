#include<iostream>
using namespace std;
class first
{
	int data1;
	public:
		void setData(int a)
		{
			data1=a;
		}
		friend class second;
	};
	class second
	{
		public:
			void fun(first f)
			{
				cout<<"data1="<<f.data1<<endl;
			}
	};
	int main()
	{
		first obj1;
		second obj2;
		obj1.setData(20);
		obj2.fun(obj1);
		cout<<endl<<"Puja Bhat"<<endl<<"Roll no:26";
		return 0;
	}
																																																																																	                                                                                                                                                                                                                                                                                                                                        
