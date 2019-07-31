#include<iostream>
             #include<conio.h>
             using namespace std;
             class Distance{
                   int feet,inch;
                   public:
                          Distance(){};
                          Distance(float m){
                                         feet=int(m);
                                         inch=12*(m-feet);
                                         }
                                         void display(){
                                              cout<<"Feet:"<<feet<<endl;
                                              cout<<"Inches: "<<inch<<endl;
                                              }
                                              };
                                              int main()
                                              {
                                                  float len;
                                                  Distance d;
                                                  cout<<"Enter Length : ";
                                                  cin>>len;
                                                  d=len;
                                                  d.display();
                                                   cout<<endl<<"Puja Bhat"<<endl<<"Roll no:26";

                                                  getch();
                                                  return 0;
                                                  }
                                                  
