/* LAB-10 (c) WAP to demonstrate dynamic memory allocation for object and object array.
(Use new for allocation and delete for deallocation.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Geometry{
	int length,breadth,radius;
	public:
		void setdataRec(int l,int b){
			length=l;
			breadth=b;
		}
		void stDataCir(int c)
		{
			radius=c;
		}
		void rectangle(){
		cout<<endl<<"The area of rectangle is "<<length*breadth<<endl;
		}
		void circle(){
			cout<<endl<<"The area of the circle is "<<2*3.14*radius<<endl;
		}
};
int main()
{
	int l,b,n,i,r;
	cout<<"How many rectangles= ";
	cin>>n;
	Geometry rect[n],*ptrRec,Cir1,*ptrCir; // declaration
	ptrRec= new Geometry[n]; //array object  dynamic memory allocation
	ptrRec= &rect[n];
	for(i=0;i<n;i++)
	{
		cout<<endl<<"Enter the length and breadth of rectangle "<<i+1<<" = ";
		cin>>l>>b;
		rect[i].setdataRec(l,b);
	}
	for(i=0;i<n;i++)
	{
		cout<<endl<<"For rectangle "<<i+1<<" :"<<endl;
		rect[i].rectangle();
	}
	ptrCir= new Geometry; //object dynamic memory allocation
	cout<<"\n\nEnter the radius of circle= ";
	cin>>r;
	ptrCir= &Cir1;
	Cir1.stDataCir(r);
	Cir1.circle();
	delete ptrRec;
	delete ptrCir;
	getch();
	return 0;
}
