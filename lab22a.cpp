
//a) write a program to demonstrate function overloading.
  #include<iostream>
  using namespace std;
  class father{
  public:
      void property(){
      cout<<"All property will be given to any child."<<endl;
            }
        void marriage()	//overloading function
{
        cout<<"Child should do arrange marriage."<<endl;
        }
        };
        class child:public father{
    public:
        void marriage()   //overloading function
{
        cout<<"Child should do love marriage."<<endl;
        }        
        };
        int main()
        {
            child obj;
            obj.property();
            obj.marriage();
            obj.father::marriage();  //parent version of marriage() will be called
            cout<<endl<<"Name:Puja Bhat"<<endl<<"Roll no:26";
            return 0;
        }
