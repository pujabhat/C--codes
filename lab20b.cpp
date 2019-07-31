 #include<iostream>
                               #include<conio.h>
                               using namespace std;
                               class Dist{
                                     int feet,inch;
                                     public:
                                            Dist(int f,int i)
                                            {
                                                     feet = f;
                                                     inch=i;
                                                     }
                                                     operator float()
                                                     {
                                                              float a= feet+inch/12.0;
                                                              return a;
                                                              }
                                                              };
                                                              
                                                              int main()
                                                              {
                                                                  Dist d(8,6);
                                                                  float x;
                                                                  x=d;
                                                                  cout<<"x= " <<x<<endl;
                                                                 cout<<"Name:Puja Bhat"<<endl<<"Roll no:26";
                                                                  getch();
                                                                  return 0;
                                                                  }
                                                                           
