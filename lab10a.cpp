/* Lab 10(a) WAP to demonstrate pointer to object*/
#include<iostream>
using namespace std;
class student
{
	int rollno,marks;
	
	public:
		void getData(int r, int m)
		{
			rollno=r;
			marks=m;
			
		}
		void display()
		{
			cout<<" rollno "<< rollno <<endl;
			cout<<" marks"<< marks <<endl;
		}
		
};
int main()
{
	
	
	student *st;
	student s1;
	st=&s1;
	s1.getData(12,34);
	st->getData(12,34);
	st->display();
    (*st).display();
	cout<<"Name:"<<"Puja Bhat"<<endl<<"Roll no:"<<"26";
	return 0;
}
		
	
	
	
	
	
	
	
	

