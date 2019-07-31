//D
                 #include<iostream>
                 #include<conio.h>
                 #define PI 3.1415;
                 using namespace std;
                 class Radian{
                       float rad;
                       public:
                              Radian(){rad=0;}
                              
                              Radian (float r)
                              {
                              rad=r;
                              }       
                       void display(){
                            cout<<"Radian : " <<rad<<endl;
                            }
                            };
                            class Degree{
                                  float deg;
                                  public:
                                        degree() {
										deg=0;
										}
                                              
                                              
                                              operator Radian()
                                              {
                                                      float r;
                                                      r=deg*3.1415/180;
                                                      return Radian(r);
                                                      }
                                                      void getdata()
                                                      {
                                                           cout<<"Degree :"<<endl;
                                                           cin>>deg;
                                                       }
                                                           };
                                                           int main()
                                                           {
                                                               Degree d;
                                                               Radian r;
                                                               d.getdata();
                                                               r=d;
                                                               r.display();
                                                               cout<<endl<<"Name:Puja Bhat"<<endl<<"Roll no:26";
                                                               getch();
                                                               return 0;
                                                               }
                                                               
                          
