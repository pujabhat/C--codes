//22b
#include<iostream>
using namespace std;
class shape
{
	public:
		float area()
		{
			return 0;
		}
};
class rectangle:public shape
{
	float l,b;
	public:
		rectangle()
		{
			l=5.1;
			b=2.2;
		}
		float area()
		{
			return l*b;
		}
};
class triangle:public shape
{
	float base,h;
	public:
		triangle()
		{
			base=20.4;
			h=12.5;
		}
		float area()
		{
			return 0.5*base*h;
		}
};
class circle:public shape
{
	float r;
	public :
		circle()
		{
			r=5.1;
		}
		float area()
		{
			return 3.14*r*r;
		}
};
int main()
{
	rectangle obj;
	float a;
	a=obj.shape::area();
	cout<<"Area in shape class is:"<<a<<endl;
	a=obj.area();
	cout<<"area in rectangle class is:"<<a<<endl;
	triangle al;
	float m;
	m=al.shape::area();
	cout<<"\n\n Area in shape class is:"<<m<<endl;
	m=al.area();
	cout<<"area in triangle class is:"<<m<<endl;
	circle a2;
	float p;
	p=a2.shape::area();
	cout<<"\n\n Area in shape class is:"<<p<<endl;
	p=a2.area();
	cout<<"area in circle class is:"<<p<<endl;
	cout<<endl<<"Name:Puja Bhat"<<endl<<"Roll no:26";
	return 0;
}
