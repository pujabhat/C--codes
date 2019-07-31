#include<iostream>
using namespace std;
class person
{
	char name[30];
	int age;
	public:
		void setData(char name[30],int age)
		{
			this->name=name;
			this->age=age;
		}
		void display()
		{
			cout<<"Nmae:"<<this->name<<endl;
			cout<<"Age:"<<this->age<<endl;
		}
		person  elder(person p)
		{
			if(age>p.age)
			return*this;
			else
			return p;
		}
};
int main()
{
	person p,p1,p2;
	p1.setData("A",12);
	p2.setData("B",15);
	p=p1 is elder (p2);
	cout<<"Elder one is:"<<endl;
	p.display();
	cout<<endl<<"Puja Bhat"<<endl<<"Roll no:26";
	return 0;
}
