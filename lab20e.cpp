#include<iostream>
                 #include<conio.h>
                 
                 using namespace std;
                 class NRS{
                       int rupee,paisa;
                       public:
                              NRS(){
                                  rupee=0;
                                  paisa=0;
                              }
                              
                              NRS (int y,int k)
                              {
                              rupee=y;
                              paisa=k;
                              }       
                       void display(){
                            cout<<"rupee and paisa : "<<rupee<<" "<<paisa<<endl;
                            }
                            };
                            class USD{
                                  int dollar,cent;
                                  public:
                                        USD() {
                                            dollar=0;
                                            cent=0;
                                        }
                                              
                                              
                                              operator NRS()
                                              {
                                                      float r;
                                                      int y,k;                                                                                           
                                                      r=(dollar+cent/100)*110;
                                                      y=r;
                                                      k=(r-y)*100;
                                                      return NRS(y,k);
                                                      }
                                                      void getdata()
                                                      {
                                                           cout<<"dollar and cent:"<<endl;
                                                           cin>>dollar>>cent;
                                                           }
                                                           };
                                                           int main()
                                                           {
                                                               NRS n;
                                                               USD u;
                                                               u.getdata();
                                                               n=u;
                                                               n.display();
                                                                cout<<endl<<"Puja Bhat"<<endl<<"Roll no:26";

                                                               return 0;
                                                               
                                                               }
