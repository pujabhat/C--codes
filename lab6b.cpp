#include<iostream>
using namespace std;
void find_length(char s[30])

{
     int i=0;
     int num_of_character=0;
     while(s[i]!='\0')
     {
                      num_of_character++;
                      i++;
                      }
                      cout<<"the length of string is="<<num_of_character<<endl;
                      }
    int main()
{
    char str[50];
    cout<<"enter your string:"<<endl;
    cin.getline(str,50);
    find_length(str);
    cout<<"Name:"<<"Puja Bhat"<<endl<<"Roll no:"<<"26";
    return 0;
}
