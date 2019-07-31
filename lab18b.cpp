//* class without using deep copy*//
#include<iostream>
using namespace std;
class Test
{
	int *ptr;
	public:
		Test(int i=0)
		{
			ptr=new int(i);
		}
		void setValue(int i)
		{
			*ptr=i;
		}
		void print()
		{
			cout<<*ptr<<endl;
		}
		void operator=(Test &t)
		{
			*ptr=*(t.ptr);
		}
};
int main()
{
	Test t1(5);
	Test t2;
	t2=t1;
	t1.setValue(10);
	t2.print();
	cout<<endl<<"Prabha Gharti Kshatri"<<endl<<"Roll no:21";
	return 0;
}
