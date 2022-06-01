#include<iostream>
using namespace std;

class FACT
{
   
    public:
   

    int number; 
    
     int fact(int number)
    {
        int Fact = number;
    if (number == 1) 
    { 
        return Fact;
    }
   
   else
   {
      return Fact*fact(number - 1); 
   }
    }

    void print(int num)
    {
       cout<<num;
    }


};




int main()
{
     FACT val;

     cout<<"Enter The Number";
     cin>>val.number;
     val.print(val.fact(val.number));
}