#include<iostream>
using namespace std;
int *min(int *x,int *y)
{
	if(*x<*y)
	return x;
	else
	return y;
}
int main()
{
	int a,b;
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
	int *m=min(&a,&b);
	cout<<"smaller number="<<*m<<endl;
	cout<<"Name:"<<" Puja Bhat "<<endl<<"Roll no:"<<"26";
	return 0;
}
