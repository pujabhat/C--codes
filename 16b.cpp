#include<iostream>
using namespace std;
class counter
{
	int count;
	public:
		counter()
		{
			count=0;
		}
		counter(int c)
		{
			count=c;
		}
		int get_count()
		{
			return count++;
		}
		counter operator ++ ()
		{
			count++;
			return counter(count);
	}
};
int main()
{
	counter c1,c2;
	cout<<"\n Before increment operator:"<<endl;
	cout<<"\n c1="<<c1.get_count()<<endl;
	cout<<"\n c2="<<c2.get_count()<<endl;
	++c1;
	c2=++c1;
	cout<<"\n After the increment operator:"<<endl;
	cout<<"\n c1="<<c1.get_count()<<endl;
	cout<<"\n c2="<<c2.get_count()<<endl;
	cout<<"Prabha Gharti Kshatri"<<endl<<"Roll no:21";
	return 0;
}
