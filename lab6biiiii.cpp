#include<iostream>

using namespace std;
void copy_it(char a[],char b[])
{

    int i;
    while(b[i]!='\0')
    {
a[i]=b[i];
       
        i++;
    }
    a[i]='\0';
    cout<<"original string="<<b<<endl;
    cout<<"copied string="<<a<<endl;
}
int main()
{

    char str1[100],str2[100];
    cout<<"enter a string"<<endl;

    cin.getline(str1,100);
    copy_it(str2,str1);
    cout<<"Name:"<<"Puja Bhat"<<endl<<"Roll no:"<<"26"<<endl;
    return 0;
}
