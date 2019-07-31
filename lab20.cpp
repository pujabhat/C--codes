 //D
                 #include<iostream>
                 #include<conio.h>
                 
                 using namespace std;
                 class NRS{
                       int rupee,paisa;
                       public:
                              NRS(){rupee=0;
							  paisa=0;}
                              
                              NRS(int r,int p)
                              {
                              rupee=r;
                              paisa=p;
                              }       
                       void display(){
                            cout<<"NRS : "<< NRS <<endl;
                            }
                            };
                            class USD{
                                  int dollar,cent;
                                  public:
                                        USD() {dollar=0;
										cent=0;}
                                              
                                              
                                              operaor NRS()
                                              {
                                                      float r,p;
                                                      r=USD*110;
                                                      p=100*(USD-r);
                                                      return NRS(r,p);
                                                      }
                                                      void getdata()
                                                      {
                                                           cout<<"NRS :"<<endl;
                                                           cin>>NRS;
                                                       }
                                                           };
                                                           int main()
                                                           {
                                                               NRS n;
                                                               USD u;
                                                               n.getdata();
                                                               u=n;
                                                               u.display();
                                                               getch();
                                                               return 0;
                                                               }
                                                               
                          
