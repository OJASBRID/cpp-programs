#include <iostream>
using namespace std;
#include<string>
#include<vector>

int main()
{
    vector <int> V;
    int a;
    for (int i = 0;i<5;i++)
    {
   cin>>a;
   

    V.push_back(a); 
    }

    for (int i = 0;i<V.size();i++)
    cout<<V[i]<<" ";
}