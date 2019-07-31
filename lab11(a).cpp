/* lab 11(a) WAP to demonstrate the concept of static data member*/
#include<iostream>
using namespace std;
class student
{
	int roll_no;
	char name[30];
	 static int count;//static data member
	public:
		void getData()
		{
			cout<<"enter roll no and name"<<endl;
			cin>>roll_no>>name;
			count++;
		}
		void display()
		{
			cout<<"count:"<<count;
		}
};
int student::count=0;
int main()
{
	student s1,s2,s3;
	s1.display();
	s2.display();
	s3.display();
	cout<<endl;
	s1.getData();
	s2.getData();
	s3.getData();
	s1.display();
	s2.display();
	s3.display();
	cout<<endl;
	cout<<"Name:"<<"Puja Bhat"<<endl<<"Roll no:"<<"26";
	return 0;
}
