#include<iostream>
using namespace std;
class student
{
	char name[15];
	int sid;
	public:
		friend void operator>>(istream &in,student &s);
		friend void operator<<(ostream &out,student &s);
};
void operator>>(istream &in ,student &s)
{
	in>>s.name;
	in>>s.sid;
}
void operator<<(ostream &out,student &s)
{
	cout<<"Name="<<s.name<<endl;
	cout<<"SID="<<s.sid<<endl;
}
int main()
{
	student s1;
	cout<<"enter students name & id"<<endl;
	cin>>s1;
	cout<<"The information you have entered is:"<<endl;
	cout<<s1;
	cout<<"Puja Bhat"<<endl<<"Roll no:26";
	return 0; 
}
