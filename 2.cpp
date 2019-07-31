//16b//
#include<iostream>
#include<conio.h>
using namespace std;
class test{
      int x,y;
      public:
             test operator --();
             --x;
             --y;
             return Test(x,y);
             test(){
                    x=0;
                    y=0;
                    }
                    test(int a,int b){
                             x=a;
                             y=b;
                             }
                             void display()
                             {
                                  coutMM"x= "<<x<<endl;
                                  coutMM"y= "<<y<<endl;
                                  }
                                  int main(){
                                      test t1(20,23),t2;
                                      t1.display();
                                      t2=--t1;
                                      t2.display();
                                      cout<<endl<<"Name:Prabha Gharti Kshatri"<<endl<<"Roll no:21";
                                      return 0;
                                  }
