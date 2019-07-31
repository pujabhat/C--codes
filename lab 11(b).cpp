/*lab 11(b) WAP to demonstrate the concept of static member funcrion*/

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
		 static void display()
		{
			cout<<"count:"<<count;
		}
};
int student::count=0;
int main()
{
	student s1,s2,s3;
	student::display();//calling static member function using scope resolution operator
    cout<<endl;
	s1.getData();
	s2.getData();
	s3.getData();
	student::display();
	s1.display();//calling static member function using dot operator
	cout<<endl;
	cout<<"Name:"<<"Puja Bhat"<<endl<<"Roll no:"<<"26";
	return 0;
}
