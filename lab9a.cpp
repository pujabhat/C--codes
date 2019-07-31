/* Lab 9 Returning object from function
a) Return by value*/
#include<iostream>
using namespace std;
class complex
{
	private:
		int real,img;
		public:
			void getData()
			{
				cout<<"enter values of real and imaginary parts:"<<endl;
				cin>>real>>img;
			}
			void display()
			{
				cout<<real<<"+"<<img<<"i"<<endl;
			}
				complex add(complex c)
				{
				
				
					complex result;
					result.real=real+c.real;
					result.img=real+c.img;
					return result;
				}
			

};
int main()
{
	complex c1,c2,c3;
	c1.getData();
	c2.getData();
	c3=c2.add(c1);
	cout<<"Two complex numbers are"<<endl;
	c1.display();
	cout<<"\n";
	c2.display();
	cout<<"The sum is:\n";
	c3.display();
	cout<<"\n";
	cout<<"Name:"<<"Puja Bhat"<<endl<<"Roll no:"<<"26";
	return 0;
}
