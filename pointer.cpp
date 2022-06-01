#include<iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int *ptr;
    ptr = &n;
    printf("%d", *ptr);


}