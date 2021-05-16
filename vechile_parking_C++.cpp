#include<iostream>
using namespace std;


class Vechile
{
    protected:
    int amount;
    int count;
    int two,three,four;

    public:
        Vechile()
        {
            amount=0;
            count=0;
            two=three=four=0;
        }

        void Delet()
        {
            amount=0;
            count=0;
            two=three=four=0;
        }
};

class Two : virtual public Vechile
{
      public:
          void t_wheel()
          {
              if(count<=50)
              {
                  two++;
                  amount=amount+100;
                  count+=1;
                  cout<<endl<<"A new TwoWheeler has parked ";
                  cout<<endl<<"Total Number of Vechile : "<<count;
                  cout<<endl<<"Now Free Space : "<<(50-(two+three+four));
              }
              else
                   cout<<"Sorry! Parking is Full ";
          }
};

class Three : virtual public Vechile{
    public:
       void th_wheel()
       {
           if(count<=50)
           {
               three++;
               amount+=200;
               count+=1;
               cout<<endl<<"A new ThreeWheeler has parked ";
               cout<<endl<<"Total Nummber of Vechile : "<<count;
               cout<<endl<<"Now Free Space : "<<(50-(two+three+four));
           }
           else
              cout<<endl<<"Sorry! Parking is Full ";
       }
};

class Four: virtual public Vechile {
    public:
       void f_wheel(){
           if(count<=50)
           {
               four++;
               amount+=400;
               count+=1;
               cout<<endl<<"A new Four Wheeeler has Parked ";
               cout<<endl<<"Total Number of Vechile "<<count;
               cout<<endl<<"Now Free Space : "<<(50-(two+three+four));
           }
           else
              cout<<"Sorry! Paerking is Full";
       }
};

class ShowRecord: public Two, public Three, public Four{
    public:
       void show()
       {
           cout<<"Total Amount : "<<amount;
           cout<<endl<<"Total Number of Vechile : "<<count;
           cout<<endl<<"Total Number of Two Wheeler "<<two;
           cout<<endl<<"Total Number of Three Wheeler "<<three;
           cout<<endl<<"Total Number of Four Wheeler "<<four;
       }
};

int main()
{
    Vechile vec;
       ShowRecord sr;
    int limit=50;
     int ch;
     cout<<"Vechile Paring System ";
     cout<<endl<<"Total number of vechile limit = "<<limit;
     cout<<endl<<"TwoWheeler Parking charges = 100 ";
     cout<<endl<<"ThreeoWheeler Parking charges = 200 ";
     cout<<endl<<"FourWheeler Parking charges = 400 ";

     while(1)
     {
     cout<<endl<<"Choose our Service : ";
     cout<<endl<<"Press 1 for Two Wheeler ";
     cout<<endl<<"Press 2 for Three Wheeler";
     cout<<endl<<"Press 3 for Four Wheeler";
     cout<<endl<<"Press 4 for show the Record";
     cout<<endl<<"Press 5 for Delete the record ";
     cout<<endl<<"Press 6 Exit \n ";
     cin>>ch;
     switch(ch)
     {
            case 1 : system("cls");
             sr.t_wheel(); break;
 
            case 2: system("cls");
              sr.th_wheel();  break;

            case 3:system("cls");
                sr.f_wheel();  break;

            case 4: system("cls");
                     sr.show(); break;
            case 5:  system("cls");
                    sr.Delet(); break;

            case 6: break;
              

            default : system("cls");
                      cout<<"Invalid key ";
            
     }
 }
          system("cls"); 
          return 0;
}