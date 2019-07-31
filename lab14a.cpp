/* 14(A)*/
#include<iostream>
using namespace std;
class emplyoee;
class boss
{
	double b_salary ;
	public:
		boss(double s)
		{
			b_salary=s;
		}
		void display()
		{
			cout<<"salary of boss:"<<b_salary<<endl;
		}
		friend void total_salary(boss b,emplyoee e);
};
class emplyoee 
{
	double e_salary ;
	public:
		emplyoee(double s)
		{
			e_salary=s;
		}
		void display()
		{
			cout<<"salary of emplyoee:"<<e_salary<<endl;
		}
		friend void total_salary(boss b,emplyoee e);	
};
void total_salary(boss b,emplyoee e)
{
	double total;
	total=b.b_salary+e.e_salary;
	cout<<"Toatal salary="<<total;
}
int main()
{
	double bsal ,esal;
	cout<<"salary of boss:"<<endl;
	cin>>bsal;
	cout<<"salary of emplyoee:"<<endl;
	cin>>esal;
	boss b1(bsal);
	emplyoee e1(esal);
	b1.display();
	e1.display();
	total_salary(b1,e1);
	cout<<endl<<"Puja Bhat"<<endl<<"Roll no:26";
	return 0;
	
}
