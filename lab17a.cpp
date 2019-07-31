#include<iostream>
using namespace std;
class Time
{
	int hr,min;
	public:
		void getData()
		{
			cout<<"enter hour and minute values"<<endl;
			cin>>hr>>min;
		}
		int opertaor<(Time t)
		{
			int ft,st;
			ft=hr*60+min;
			st=t.hr*60+t.min;
			if(ft<st)
			return 1;
			else
			return 0;
		}
};
int main()
{
	Time t1,t2;
	t1.getData();
	t2.getData();
	if(t1<t2)
	cout<<"t1 is less than t2"<<endl;
	else
	cout<<"t2 is less than t1"<<endl;
	return 0;
}

	

