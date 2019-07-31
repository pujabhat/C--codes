#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    string str1="Hello how are you?";
    char str2[50];
    str1.copy(str2,18,0);
    str2[19]='/0';
    cout<<str2<<endl;
    getch();
    return 0;
}
