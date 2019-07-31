#include<iostream>
using namespace std;
class Emplyoee
{
	private:
		int emp_id;
		char name[30];
		float salary;
		public:
			void getData();
			void showData();
			
};
void Emplyoee::getData()
{
cout<<"enter emp_id,name and salary"<<endl;
cin>>emp_id>>name>>salary;
}
void Emplyoee::showData()
{
	cout<<"emplyoee id="<<emp_id<<endl;
	cout<<"emplyoee name="<<name<<endl;
	cout<<"emplyoee salary="<<salary<<endl;
}
int main()
{
	Emplyoee e[5];
	for(int i=0;i<5;i++)
	{
		e[i].getData();
	}
	for(int i=0;i<5;i++)
	{
		e[i].showData();
	} 
	cout<<"Name:"<<"Puja Bhat"<<endl<<"Roll no:"<<"26";n
	return 0;
}
