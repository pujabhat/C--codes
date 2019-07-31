#include<iostream>
using namespace std;
int main()
{
 float a=7.44;
 int x=a;
 char z='A';
 int y;
 y=int(z);
 cout<<"Implicit Type Conversion of float to int :"<<endl<<a<<" -->"<<x<<endl;
 cout<<"Explicit Type Conversion of char  to int :"<<endl<<z<<" -->"<<y<<endl;
 return 0;
}
