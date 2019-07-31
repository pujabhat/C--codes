//c
#include<iostream>
using namespace std;
class base
{
	protected:
		int i,j;
		public:
			void setij(int a,int b)
			{
				i=a;
				j=b;
			}
			void showij()
			{
				cout<<"i:"<<i<<" "<<"j:"<<j<<endl;
			}
		};
		class derived:protected base
		{
			int k;
			public:
				void setk()
				{
					setij(10,20);
					k=i*j;
				}
				void showall()
				{
					cout<<"value of k is:"<<k<<endl;
					showij();
				}
		};
		int main()
		{
			derived ob;
			ob.setk();
			ob.showall();
			cout<<endl<<"Name:Puja Bhat"<<endl<<"Roll no:26";
	        return 0;
		}
	
