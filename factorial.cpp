#include<iostream>
using namespace std;

int fact(int n)
{

    int Fact = n;
    if (n == 1)
    {
        return Fact;
    }
   
   else
   {
      return Fact*fact(n - 1); 
   }



}

int main()
{
    cout<<"Enter the number to find factoial";
    int n;
    cin>>n;

    int Fact;
    Fact = fact(n); 

    cout<<"The Factorial is :"<<Fact;
}