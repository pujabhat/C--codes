  //16a//
#include<iostream>
using namespace std;
class Distance
{
  int feet;
  int inch;
  public:
  void getData()
  {
  cout<<"enter feet and inch values"<<endl;
  cin>>feet>>inch;
 }	
 Distance operator+(Distance d)
 {
 	Distance temp;
 	temp.feet=feet+d.feet;
 	temp.inch=inch+d.inch;
 	temp.feet=temp.feet+temp.inch/12;
 	temp.inch=temp.inch%12;
 	return temp;
 }
 void display()
 {
 	cout<<"feet:"<<feet<<endl<<"inches:"<<inch<<endl;
 }
};
int main()
{
Distance d1,d2,d3;
d1.getData();
d2.getData();
d3=d1+d2;
cout<<"In d1"<<endl;
d1.display();
cout<<"In d2"<<endl;
d2.display();
cout<<"In d3"<<endl;
d3.display();
cout<<"Prabha Gharti Kshatri"<<endl<<"Roll no:21";
return 0;

}
